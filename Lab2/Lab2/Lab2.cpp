#include <iostream>
#include "Engine.h"

#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "SDL_image.h"

int main()
{
    Engine myengine = Engine();
    for (int i = 0; i < 5; i++)
    {
        myengine.GameLoop();
    }
}
