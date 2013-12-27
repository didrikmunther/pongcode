#ifndef CAPP_H
#define CAPP_H

#include <SDL.h>
#include <iostream>

class CApp
{
private:
    bool Running;

    SDL_Surface* Surf_Display;

private:
    #define FPS 200
    #define FPS2 15
    Uint32 waittime;
    Uint32 framestarttime;
    Sint32 delaytime;

    bool fps1;

public:
    int mouseX;
    int mouseY;

public:
    CApp();

    int OnExecute();

public:
    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLoop();

    void OnRender();

    void OnCleanup();

public:
    int marginSides;
    int marginUpDown;

    SDL_Rect background;

    SDL_Rect platform;
    int speed;

    SDL_Rect player;
    int playerVel;
    int playerSpeed;

    SDL_Rect ball;
    int ballSpeedx;
    int ballSpeedy;

};

#endif // CAPP_H
