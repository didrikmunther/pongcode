#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event)
{
    if(Event->type == SDL_QUIT)
    {
        Running = false;
    }
    if(Event->type == SDL_KEYDOWN)
    {
        switch(Event->key.keysym.sym)
        {
        case SDLK_0:
            if(fps1 == true)
               {waittime = 1000.0f/FPS;
                fps1 = false;}
            else
               {waittime = 1000.0f/FPS2;
                fps1 = true;}

            break;

        case SDLK_LEFT:
            playerVel += -playerSpeed;
            break;

        case SDLK_RIGHT:
            playerVel += playerSpeed;
            break;

            default:;
        }
    }
    if(Event->type == SDL_KEYUP)
    {
        switch(Event->key.keysym.sym)
        {
        case SDLK_LEFT:
            playerVel += playerSpeed;
            break;

        case SDLK_RIGHT:
            playerVel += -playerSpeed;
            break;

            default:;
        }
    }
    if(Event->type == SDL_MOUSEBUTTONDOWN)
    {
        SDL_GetMouseState(&mouseX, &mouseY);

        ball.x = mouseX;
        ball.y = mouseY;
    }
}
