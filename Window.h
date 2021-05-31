#ifndef WINDOW_H
#define WINDOW_H

#include "Textures.h"

class Window
{
public:
    
    SDL_Window* win;
    SDL_Renderer* rend;

    
    Window();
    void putOnRend(SDL_Texture* tex, SDL_Rect rect);
    void refrRend();
    
    
    ~Window();
    
};

#endif
