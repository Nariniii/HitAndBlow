using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InputNumController : MonoBehaviour
{
    [SerializeField]
    private Text[] numTexts;

    private int numCnt;
    public bool IsInputNum { get; set; } = false;
    public bool IsReadyGame { get; private set; } = false;

    private void Start()
    {
        Debug.Log("InputNumController Start!!");
        numCnt = 0;
    }

    public void pushDeleteBtn()
    {
        if (numCnt == 0) return;
        numCnt--;
        numTexts[numCnt].text = "-";
        Debug.Log("delte num");
    }

    public void pushCheckBtn()
    {
        if (numCnt != 3) return;
        GameController.myInputNumber = numTexts;
        IsInputNum = true;
        IsReadyGame = true;
        numCnt = 0;
        Debug.Log("push Check!");
    }

    public void pushNumber(int num)
    {
        var s = num.ToString();
        if (numCnt == 3)
        {
            Debug.Log("numCnt is 3: " + numCnt);
            return;
        }
        // 同じ数値が入力されたとき
        if (numCnt != 0)
        {
            for (var i = numCnt-1; i >= 0; i--)
            {
                var n = int.Parse(numTexts[i].text);
                if (n == num)
                {
                    Debug.Log(num + ": Contains Array");
                    return;
                }
            }
        }
        numTexts[numCnt].text = s;

        numCnt++;
        Debug.Log("push num: " + num);
    }

}
