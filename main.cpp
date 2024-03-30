/////////g++ main.cc -lraylib
#include "Game.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    Game game{screenWidth,screenHeight,"Raylib"};

    while(!game.GameShouldClose())
    {
        game.Tick();
    }
    return 0;
}



