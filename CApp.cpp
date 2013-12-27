#include "CApp.h"

CApp::CApp()
{
    Surf_Display = NULL;

    framestarttime = 0;

    waittime = 1000.0f/FPS;

    fps1 = false;

    marginSides = 25;
    marginUpDown = 25;

    speed = 1;
    ballSpeedx = 1;
    ballSpeedy = ballSpeedx;

    playerVel = 0;
    playerSpeed = 2;

    Running = true;
}

int CApp::OnExecute()
{
    if(OnInit() == false) return -1;

    SDL_Event Event;

    while(Running)
    {
        while(SDL_PollEvent(&Event))
        {
            OnEvent(&Event);
        }

        OnLoop();

        OnRender();

        delaytime = waittime - (SDL_GetTicks() - framestarttime);
        if(delaytime > 0)
            SDL_Delay((Uint32)delaytime);
        framestarttime = SDL_GetTicks();
    }

    OnCleanup();

    return 0;
}

int main(int argc, char* argv[])
{
    CApp theApp;

    return theApp.OnExecute();
}
