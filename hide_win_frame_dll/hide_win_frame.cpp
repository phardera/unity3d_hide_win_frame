
#include<Windows.h>

extern "C" {
int __declspec(dllexport) __stdcall HideWindow()
{
 //finde window
 HWND hWin =GetActiveWindow();
 if (hWin ==0)
  return 0;

 RECT rc;
 GetClientRect(hWin, &rc);

 long lStyle =GetWindowLong(hWin, GWL_STYLE);
 lStyle =lStyle & (~WS_CAPTION);
 SetWindowLong( hWin, GWL_STYLE, lStyle);
 
 SetWindowPos(hWin, NULL, 0, 0, rc.right, rc.bottom, SWP_NOMOVE);

 return 2;

}

}