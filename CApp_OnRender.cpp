#include "CApp.h"

void CApp::OnRender()
{
    SDL_FillRect(Surf_Display, &background, SDL_MapRGB(Surf_Display->format, 0, 0, 0));

    SDL_FillRect(Surf_Display, &platform, SDL_MapRGB(Surf_Display->format, 255, 255, 255));

    SDL_FillRect(Surf_Display, &player, SDL_MapRGB(Surf_Display->format, 255, 255, 255));

    SDL_FillRect(Surf_Display, &ball, SDL_MapRGB(Surf_Display->format, 255, 255, 255));

    SDL_Flip(Surf_Display);
}
