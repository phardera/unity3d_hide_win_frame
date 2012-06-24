using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class hide_win_frame : MonoBehaviour {

    [DllImport("winframehidden")]
    private static extern int HideWindow();

	// Use this for initialization
	void Start () {
        HideWindow();
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
