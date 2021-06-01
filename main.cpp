#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>

#include "Textures.h"
#include "Window.h"
#include "Plansza.h"

using namespace std;

int i, j;

int main(int argc, char **argv) {
    
    Window wind = Window();
    Textures text = Textures();
    text.setWindow(&wind);
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
    
    bool close_requested = false;  
    SDL_Rect rect;
    rect.h = 30;
    rect.w = 30;
    SDL_Event event;
    
    
    int time1 = time(0);
    int time2;
    int timen;
    
    bool newgame = true;
    
    Plansza plansza = Plansza();
    int odsloniete = 100;
    while(!close_requested)
    {
        if (newgame){
            plansza.reset();
            plansza.generator();
            time1 = time(0);
            newgame =false;
        }
        rect.x=45*3;
        rect.y=100*3;
        wind.putOnRend(text.getTexture("boxstart"),rect);
        rect.x=0;
        
        if (plansza.ile_zostalo/10 == 2)
            wind.putOnRend(text.getTexture("l2"),rect);
        else if (plansza.ile_zostalo/10 == 1)
            wind.putOnRend(text.getTexture("l1"),rect);
        else if (plansza.ile_zostalo/10 == 0)
            wind.putOnRend(text.getTexture("l0"),rect);

        
        rect.x=30;
        
        if (plansza.ile_zostalo%10 == 0)
            wind.putOnRend(text.getTexture("l0"),rect);
        else if (plansza.ile_zostalo%10 == 1)
            wind.putOnRend(text.getTexture("l1"),rect);
        else if (plansza.ile_zostalo%10 == 2)
            wind.putOnRend(text.getTexture("l2"),rect);
        else if (plansza.ile_zostalo%10 == 3)
            wind.putOnRend(text.getTexture("l3"),rect);
        else if (plansza.ile_zostalo%10 == 4)
            wind.putOnRend(text.getTexture("l4"),rect);
        else if (plansza.ile_zostalo%10 == 5)
            wind.putOnRend(text.getTexture("l5"),rect);
        else if (plansza.ile_zostalo%10 == 6)
            wind.putOnRend(text.getTexture("l6"),rect);
        else if (plansza.ile_zostalo%10 == 7)
            wind.putOnRend(text.getTexture("l7"),rect);
        else if (plansza.ile_zostalo%10 == 8)
            wind.putOnRend(text.getTexture("l8"),rect);
        else if (plansza.ile_zostalo%10 == 9)
            wind.putOnRend(text.getTexture("l9"),rect);

        
        
        time2 = time(0);
        timen = time2 - time1;
        
        rect.x = 210;
        
        if (timen / 100 == 0)
            wind.putOnRend(text.getTexture("l0"),rect);
        else if (timen / 100 == 1)
            wind.putOnRend(text.getTexture("l1"),rect);
        else if (timen / 100 == 2)
            wind.putOnRend(text.getTexture("l2"),rect);
        else if (timen / 100 == 3)
            wind.putOnRend(text.getTexture("l3"),rect);
        else if (timen / 100 == 4)
            wind.putOnRend(text.getTexture("l4"),rect);
        else if (timen / 100 == 5)
            wind.putOnRend(text.getTexture("l5"),rect);
        else if (timen / 100 == 6)
            wind.putOnRend(text.getTexture("l6"),rect);
        else if (timen / 100 == 7)
            wind.putOnRend(text.getTexture("l7"),rect);
        else if (timen / 100 == 8)
            wind.putOnRend(text.getTexture("l8"),rect);
        else if (timen / 100 == 9)
            wind.putOnRend(text.getTexture("l9"),rect);
        
        rect.x = 240;
        
        if ((timen % 100) / 10 == 0)
            wind.putOnRend(text.getTexture("l0"),rect);
        else if ((timen % 100) / 10 == 1)
            wind.putOnRend(text.getTexture("l1"),rect);
        else if ((timen % 100) / 10 == 2)
            wind.putOnRend(text.getTexture("l2"),rect);
        else if ((timen % 100) / 10 == 3)
            wind.putOnRend(text.getTexture("l3"),rect);
        else if ((timen % 100) / 10 == 4)
            wind.putOnRend(text.getTexture("l4"),rect);
        else if ((timen % 100) / 10 == 5)
            wind.putOnRend(text.getTexture("l5"),rect);
        else if ((timen % 100) / 10 == 6)
            wind.putOnRend(text.getTexture("l6"),rect);
        else if ((timen % 100) / 10 == 7)
            wind.putOnRend(text.getTexture("l7"),rect);
        else if ((timen % 100) / 10 == 8)
            wind.putOnRend(text.getTexture("l8"),rect);
        else if ((timen % 100) / 10 == 9)
            wind.putOnRend(text.getTexture("l9"),rect);
        
        rect.x = 270;
        
        if (timen%10 == 0)
            wind.putOnRend(text.getTexture("l0"),rect);
        else if (timen%10 == 1)
            wind.putOnRend(text.getTexture("l1"),rect);
        else if (timen%10 == 2)
            wind.putOnRend(text.getTexture("l2"),rect);
        else if (timen%10 == 3)
            wind.putOnRend(text.getTexture("l3"),rect);
        else if (timen%10 == 4)
            wind.putOnRend(text.getTexture("l4"),rect);
        else if (timen%10 == 5)
            wind.putOnRend(text.getTexture("l5"),rect);
        else if (timen%10 == 6)
            wind.putOnRend(text.getTexture("l6"),rect);
        else if (timen%10 == 7)
            wind.putOnRend(text.getTexture("l7"),rect);
        else if (timen%10 == 8)
            wind.putOnRend(text.getTexture("l8"),rect);
        else if (timen%10 == 9)
            wind.putOnRend(text.getTexture("l9"),rect);
        
        int mouse_x, mouse_y;
        int mysz = SDL_GetMouseState(&mouse_x,&mouse_y);
        for ( i=0;i<plansza.n-2;i++){
            for ( j=0;j<plansza.m-2;j++)
            {
                rect.x = i * 10 *3;
                rect.y = j * 10 *3;
                wind.putOnRend(text.getTexture(plansza.state(i,j)),rect);
            }
        }
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                close_requested = true;
            }
        }
        
        if ( mysz & SDL_BUTTON(SDL_BUTTON_LEFT) )
        {
            if (mouse_y >= 300)
            {
                odsloniete = 100;
                newgame = true;
            }
            else if ( plansza.covercheck(mouse_x/30,mouse_y/30)==0)
            {
                plansza.uncover(mouse_x/30,mouse_y/30);
                odsloniete --;
                if (odsloniete == 0 || plansza.bombcheck(mouse_x/30,mouse_y/30) || odsloniete==0)
                {
                    cout << mouse_x<<" "<<mouse_y<<endl;
                    for ( i=0;i<plansza.n-2;i++){
                        for ( j=0;j<plansza.m-2;j++)
                        {
                            rect.x = i * 30;
                            rect.y = j * 30;
                            
                            wind.putOnRend(text.getTexture(plansza.finish(i,j)),rect);
                        }
                    }
                    
                    while(!close_requested)
                    {
                        wind.rendShow();
                        while (SDL_PollEvent(&event))
                        {
                            if (event.type == SDL_QUIT)
                            {
                                close_requested = true;
                            }
                        }
                        int mouse_x, mouse_y;
                        int mysz = SDL_GetMouseState(&mouse_x,&mouse_y);
                        if ( mysz & SDL_BUTTON(SDL_BUTTON_LEFT) )
                        {
                            if (mouse_y >= 300)
                            {
                                newgame=true;
                                break;
                            }                        
                        }
                        
                    }
                }
                
            }
        }
        else if ( mysz & SDL_BUTTON(SDL_BUTTON_RIGHT) ) 
        {
            if ( plansza.covercheck(mouse_x/30,mouse_y/30) == 0 )
            {
                plansza.flag(mouse_x/30,mouse_y/30);
                plansza.ile_zostalo-=1;
                odsloniete --;

            }
            else if ( plansza.covercheck(mouse_x/30,mouse_y/30) == 2 )
            {
                plansza.unflag(mouse_x/30,mouse_y/30);
                plansza.ile_zostalo+=1;
                odsloniete ++;
            }
        }
        wind.refrRend();
                
    }
    
    return 0;
}
