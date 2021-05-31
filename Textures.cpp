#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include <map>

#include "Textures.h"

using namespace std;

Textures::Textures(){}
SDL_Texture * Textures::makeTexture(string name, const char* path )
{
    SDL_Surface* surface = NULL;
    surface = IMG_Load(path);
    if (!surface)
    {
        cout<<"error creating surface"<<endl;;
        SDL_Quit();
        exit(1);
    }
    
    SDL_Texture* text = SDL_CreateTextureFromSurface(window.rend, surface);
    SDL_FreeSurface(surface);
    if (!text)
    {
        cout<<"error creating texture: \n"<< SDL_GetError()<<endl;
        exit(1);
    }
    return text;
}

void Textures::mapTexture(string name, SDL_Texture* texture)
{
    tex.insert({name,texture});
}

void Textures::setWindow(Window wind)
{
    window=wind;
}
void Textures::include(string name, const char* path)
{
    mapTexture(name,makeTexture(name,path));
}

Textures::~Textures()
{
    typename map <string, SDL_Texture*>::iterator it;
    for (it = tex.begin();it!=tex.end();it++){
        SDL_DestroyTexture(it->second);
    }
}






