using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
// TODO 勝利条件とResult表示

public class GameController : MonoBehaviour
{
    [SerializeField]
    private Text[] numTexts;
    [SerializeField]
    private InputNumController numController;
    [SerializeField]
    private GameObject inputNumberObj;
    [SerializeField]
    private GameObject scoresObj;
    [SerializeField]
    private GridLayoutGroup myScoreNumGrid;
    [SerializeField]
    private GridLayoutGroup myScoreHitBlowGrid;
    [SerializeField]
    private GridLayoutGroup rivalScoreNumGrid;
    [SerializeField]
    private GridLayoutGroup rivalScoreHitBlowGrid;
    [SerializeField]
    private GameObject numObj;
    [SerializeField]
    private GameObject hitObj;
    [SerializeField]
    private GameObject blowObj;
    [SerializeField]
    private GameObject resultObj;
    [SerializeField]
    private Text resultText;

    private Text[] myNums;      // プレイヤーの数値
    private int[] rivalNums;    // AIの数値
    private int turnSize;       // 最大ターン
    private int gameTurn;       // 現在のターン数
    private Text[] myScores;
    private Text[] myHits;
    private Text[] myBlows;
    private Text[] rivalScores;
    private Text[] rivalHits;
    private Text[] rivalBlows;
    private bool isSetUp;       // ゲーム起動準備
    private List<int[]> rivalInputtedList;

    public static Text[] myInputNumber;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Start!!!!!!: " + isSetUp);
        // Update ifが動くとisSetUpが更新される.
        if (isSetUp == false)
        {
            //Debug.Log(myNumber[0].text + myNumber[1].text + myNumber[2].text);
            Init();
            MakeScoreGrid();
            isSetUp = true;
        }
    }

    private void Update()
    {
        // プレイヤーの入力を反映
        if (numController.IsInputNum == true)
        {
            Debug.Log("Number Inputed!");
            gameTurn++;
            numController.IsInputNum = false;
            myScores[gameTurn].text = myInputNumber[0].text + " " + myInputNumber[1].text + " " + myInputNumber[2].text;
            inputNumberObj.SetActive(false);
            scoresObj.SetActive(true);
            isSetUp = true;
            /* TODO numTextsとmyInputNumberが参照一緒なため, 
             * ActiveMyNumberTextsを先にするとCheckHitBlowがうまく動作しない
             */
            CheckHitBlow(TextsToIntArray(myInputNumber), true);
            ActiveMyNumberTexts(true);

            // AIが行動
            PlayAI();

            CheckWinOrLose();
        }
    }

    private void Init()
    {
        myNums = new Text[3];
        for (var i = 0; i < 3; i++)
        {
            // TODO ここだけ参照渡しになってる
            numTexts[i].text = myInputNumber[i].text;
        }
        // TODO これは参照渡しになっていない. (多分)
        myNums = myInputNumber;
        /* TODO
         * おそらく, text各要素を渡す=textの参照を渡す
         * に対して, textの配列を渡すは値渡しになっているから.
         */

        rivalNums = new int[3];
        numController.IsInputNum = false;
        turnSize = 10;
        gameTurn = 0;
        myScores = new Text[turnSize];
        myHits = new Text[turnSize];
        myBlows = new Text[turnSize];
        rivalScores = new Text[turnSize];
        rivalHits = new Text[turnSize];
        rivalBlows = new Text[turnSize];
        rivalInputtedList = new List<int[]>();
        resultObj.SetActive(false);
        SetAINumber();
        Debug.Log("Init! GameScene");
    }

    private void MakeScoreGrid()
    {
        Text obj;
        for (var i = 0; i < turnSize; i++)
        {
            obj = Instantiate(numObj, myScoreNumGrid.transform).GetComponentInChildren<Text>();
            if (i != 0)
                obj.text = "・・・";
            myScores[i] = obj;
            obj = Instantiate(hitObj, myScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
            if (i != 0)
                obj.text = "";
            myHits[i] = obj;
            obj = Instantiate(blowObj, myScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
            if (i != 0)
                obj.text = "";
            myBlows[i] = obj;
        }
        for (var i = 0; i < turnSize; i++)
        {
            obj = Instantiate(numObj, rivalScoreNumGrid.transform).GetComponentInChildren<Text>();
            if (i != 0)
                obj.text = "・・・";
            else
                obj.text = "Rival Score";
            rivalScores[i] = obj;
            obj = Instantiate(hitObj, rivalScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
            if (i != 0)
                obj.text = "";
            rivalHits[i] = obj;
            obj = Instantiate(blowObj, rivalScoreHitBlowGrid.transform).GetComponentInChildren<Text>();
            if (i != 0)
                obj.text = "";
            rivalBlows[i] = obj;
        }
    }

    public void PushInputNumBtn()
    {
        inputNumberObj.SetActive(true);
        scoresObj.SetActive(false);
        ActiveMyNumberTexts(false);
    }

    private void ActiveMyNumberTexts(bool acitive)
    {
        if (acitive)
        {
            for (var i = 0; i < 3; i++)
                numTexts[i].text = myNums[i].text;
        }
        else
        {
            for (var i = 0; i < 3; i++)
                numTexts[i].text = "-";
        }
    }

    private int[] TextsToIntArray(Text[] texts, int len = 3)
    {
        var array = new int[len];
        for (var i = 0; i < len; i++)
            array[i] = int.Parse(texts[i].text);
        return array;
    }

    private void CheckHitBlow(int[] numArray, bool isPlayer)
    {
        var hitCnt = 0;
        var blowCnt = 0;

        if (isPlayer)
        {
            Debug.Log("playerCheck: " + numArray[0] + numArray[1] + numArray[2]);
            for (var i = 0; i < 3; i++)
            {
                if (numArray[i] == rivalNums[i])
                    hitCnt++;
                for (var j = 0; j < 3; j++)
                {
                    if (i != j && numArray[i] == rivalNums[j])
                        blowCnt++;
                }
            }
            // textに出力
            myHits[gameTurn].text = hitCnt.ToString();
            myBlows[gameTurn].text = blowCnt.ToString();
        }
        else
        {
            Debug.Log("AICheck: " + numArray[0] + numArray[1] + numArray[2]);
            var playerNums = TextsToIntArray(myNums);
            for (var i = 0; i < 3; i++)
            {
                if (numArray[i] == playerNums[i])
                    hitCnt++;
                for (var j = 0; j < 3; j++)
                {
                    if (i != j && numArray[i] == playerNums[j])
                        blowCnt++;
                }
            }
            // textに出力
            rivalHits[gameTurn].text = hitCnt.ToString();
            rivalBlows[gameTurn].text = blowCnt.ToString();
        }
    }

    private void SetAINumber()
    {
        var checkList = GetCheckNumList();
        for (var i = 0; i < 3; i++)
        {
            var r = Random.Range(0, 10);
            while (!checkList.Contains(r))
            {
                r = Random.Range(0, 10);
            }
            checkList.Remove(r);
            rivalNums[i] = r;
        }
        Debug.Log("Set AI Number: " + rivalNums[0] + rivalNums[1] + rivalNums[2]);
    }

    private void PlayAI()
    {
        // AIの入力
        int[] inputNumArray;
        do
        {
            var checkList = GetCheckNumList();
            inputNumArray = new int[3];
            for (var i = 0; i < 3; i++)
            {
                var r = Random.Range(0, 10);
                while (!checkList.Contains(r))
                {
                    r = Random.Range(0, 10);
                }
                checkList.Remove(r);
                inputNumArray[i] = r;
            }
        } while (rivalInputtedList.Contains(inputNumArray));
        rivalInputtedList.Add(inputNumArray);

        // 入力数値をtextに反映
        rivalScores[gameTurn].text
            = string.Format("{0} {1} {2}", inputNumArray[0], inputNumArray[1], inputNumArray[2]);
        CheckHitBlow(inputNumArray, false);
    }

    private List<int> GetCheckNumList()
    {
        var list = new List<int>();
        for (var i = 0; i < 10; i++)
            list.Add(i);
        return list;
    }

    private void CheckWinOrLose()
    {
        Debug.Log("gameTurn: " + gameTurn);
        var myHit = int.Parse(myHits[gameTurn].text);
        var rivalHit = int.Parse(rivalHits[gameTurn].text);
        if (myHit == 3 || rivalHit == 3)
        {
            resultObj.SetActive(true);
            if (myHit == 3 && rivalHit == 3)
            {
                Debug.Log("Draw");
                resultText.text = "DRAW";
            }
            else if (myHit == 3)
            {
                Debug.Log("player win");
                resultText.text = "WIN";
            }
            else if (rivalHit == 3)
            {
                Debug.Log("rival win");
                resultText.text = "LOSE";
            }
        }
        if (gameTurn == turnSize-1)
        {
            resultObj.SetActive(true);
            Debug.Log("Turn over");
            resultText.text = "DRAW";
        }
    }

    public void BackToTitleBtn()
    {
        Init();
        SceneManager.LoadScene("MenuScene");
    }
}
