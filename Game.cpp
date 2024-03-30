#include "Game.h"
#include "raylib.h"
using namespace std;

Game::Game(int width, int height, std::string title)
{
    InitWindow(width,height,title.c_str());  //since raylib takes a char pointer we convert the title (std::string) to a c string
}

Game::~Game() noexcept
{
    CloseWindow();
}

bool Game::GameShouldClose() const
{
    return WindowShouldClose();
}

void Game::Tick()
{
    BeginDrawing();   //since update and draw functions are insdie the begin and endrawing functions, we will be sure that we wont forget to call them before drawing anything on screen
    Update();
    Draw();
    EndDrawing();
}

void Game::Draw()
{

}

void Game::Update()
{


}