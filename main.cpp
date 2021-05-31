#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>

#include "Textures.h"
#include "Window.h"
using namespace std;
int main(int argc, char **argv) {
    Window wind = Window();
    Textures text = Textures();
    text.include("box1","saperimg/saperimg1.bmp");
    text.include("box2","saperimg/saperimg2.bmp");
    text.include("box3","saperimg/saperimg3.bmp");
    text.include("box4","saperimg/saperimg4.bmp");
    text.include("box5","saperimg/saperimg5.bmp");
    text.include("box6","saperimg/saperimg6.bmp");
    text.include("box7","saperimg/saperimg7.bmp");
    text.include("box8","saperimg/saperimg8.bmp");
    text.include("boxblank","saperimg/saperimgblank.bmp");
    text.include("boxcover","saperimg/saperimgcover.bmp");
    text.include("boxbomb","saperimg/saperimgbomb.bmp");
    text.include("boxflag","saperimg/saperimgflag.bmp");
    text.include("boxflagx","saperimg/saperimgflagx.bmp");
    text.include("boxstart","saperimg/saperimgstart.bmp");
    text.include("l0","saperimg/saperimgl0.bmp");
    text.include("l1","saperimg/saperimgl1.bmp");
    text.include("l2","saperimg/saperimgl2.bmp");
    text.include("l3","saperimg/saperimgl3.bmp");
    text.include("l4","saperimg/saperimgl4.bmp");
    text.include("l5","saperimg/saperimgl5.bmp");
    text.include("l6","saperimg/saperimgl6.bmp");
    text.include("l7","saperimg/saperimgl7.bmp");
    text.include("l8","saperimg/saperimgl8.bmp");
    text.include("l9","saperimg/saperimgl9.bmp");
    return 0;
}
