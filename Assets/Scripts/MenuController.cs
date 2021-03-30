using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    [SerializeField]
    private GameObject titleTextObj;
    [SerializeField]
    private Button vsCpuButton;
    [SerializeField]
    private InputNumController numController;

    private void Start()
    {
        Init();
    }

    private void Update()
    {
        if (numController.IsReadyGame)
        {
            Debug.Log("transit Scene To GameScene");
            SceneManager.LoadScene("GameScene");
        }
    }

    private void Init(bool active = true)
    {
        titleTextObj.SetActive(active);
        vsCpuButton.gameObject.SetActive(active);
        vsCpuButton.onClick.AddListener(() => pushVsCpuBtn());
    }

    public void pushVsCpuBtn()
    {
        Init(false);
        numController.gameObject.SetActive(true);
    }
}
