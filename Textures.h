#ifndef TEXTURES_H
#define TEXTURES_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include <map>


using namespace std;

class Window;
class Textures
{
public:
    Textures();
    map <string, SDL_Texture*> tex;
    void setWindow(Window* wind);
    void include(string name,const char* path);
    SDL_Texture* getTexture(string name);
    ~Textures();
private:
    Window* window;
    void mapTexture(string name, SDL_Texture* texture);
    SDL_Texture* makeTexture(string name,const char* path);
    
};

#endif
