#include "CApp.h"

bool CApp::OnInit()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) return false;

    if((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) return false;

    //================================

    background.x = 0;
    background.y = 0;
    background.w = 640;
    background.h = 480;

    player.x = 320;
    player.y = 480 - marginUpDown;
    player.w = 50;
    player.h = 20;

    platform.x = 320;
    platform.y = 0 + marginUpDown;
    platform.w = 50;
    platform.h = 20;

    ball.x = 320;
    ball.y = 240;
    ball.w = 10;
    ball.h = 10;

    //================================

    return true;
}
