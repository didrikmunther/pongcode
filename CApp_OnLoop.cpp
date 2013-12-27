#include "CApp.h"

void CApp::OnLoop()
{
//    if((platform.x + platform.w) > 615)
//        speed = -speed;
//    else if((platform.x) < 25)
//        speed = -speed;
//
//    platform.x += speed;

    if(ball.x < 640 - marginSides - platform.w)
        platform.x = ball.x;

// ===============================

    //ball.x
    if((ball.x + ball.w) > 640 - marginSides)
        ballSpeedx = -ballSpeedx;
    else if((ball.x) < 0 + marginSides)
        ballSpeedx = -ballSpeedx;

    //ball.y
    if((ball.y + ball.h > player.y) && (((ball.x <= player.x) && (ball.x + ball.w >= player.x)) || ((ball.x >= player.x) && (ball.x <= player.x + player.w))))
        ballSpeedy = -ballSpeedy;
    else if((ball.y < platform.y + platform.h) && (((ball.x <= platform.x) && (ball.x + ball.w >= platform.x)) || ((ball.x >= platform.x) && (ball.x <= platform.x + platform.w))))
        ballSpeedy = -ballSpeedy;

    ball.x += ballSpeedx;
    ball.y += ballSpeedy;

// ===============================

    if((player.x + player.w + playerVel < 640 - marginSides) && (player.x + playerVel > 0 + marginSides))
        player.x += playerVel;

// ===============================

    // Check if ball is out of bounds
    if((ball.y > 480) || (ball.y + ball.h < 0))
        {ball.x = 320; ball.y = 240; ball.w = 10; ball.h = 10; ballSpeedx = -ballSpeedx; ballSpeedy = -ballSpeedy;}

}
