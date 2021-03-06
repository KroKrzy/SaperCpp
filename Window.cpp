#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>

#include "Window.h"

#define WINDOW_WIDTH (300)
#define WINDOW_HEIGHT (330)
using namespace std;

Window::Window()
{
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0)
    {
        cout<<"error initializing SDL: \n"<<SDL_GetError()<<endl;;
        exit(1);
    }
    SDL_Window* win = SDL_CreateWindow("Saper", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT,0);
    if (!win)
    {
        cout<<"error creating window: \n"<< SDL_GetError()<<endl;
        exit(1);
    }
    Uint32 render_flags = SDL_RENDERER_ACCELERATED;
    rend = SDL_CreateRenderer(win, -1, render_flags);
    
    if (!rend)
    {
        cout<<"error recating renderer: \n"<< SDL_GetError()<<endl;
        exit(1);
    }
}
void Window::putOnRend(SDL_Texture* tex, SDL_Rect rect)
{
    SDL_RenderCopy(rend, tex, NULL, &rect);
}

void Window::refrRend()
{
    rendShow();
    SDL_Delay(1000/60);
    SDL_RenderClear(rend);
}

void Window::rendShow()
{
    SDL_RenderPresent(rend);
}



Window::~Window()
{
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(win);
    SDL_Quit();
}


