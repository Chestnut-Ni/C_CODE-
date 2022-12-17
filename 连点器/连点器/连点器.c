#include<stdio.h>
#include<windows.h>
int main()
{
    while(1)
    {
        if(GetAsyncKeyState(VK_SPACE))
        {
            while(1)
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);
                Sleep(3000);
                if(GetAsyncKeyState(VK_ESCAPE))return 0; 
            }
        }
    }
    return 0;
}
