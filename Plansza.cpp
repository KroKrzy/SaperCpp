#include <iostream>
#include <time.h>
#include "Plansza.h"

using namespace std;

Plansza::Plansza(){}
void Plansza::reset()
{
    for (i=0;i<n;i++){
        for (j=0;j<m;j++)
            plansza[i][j]=0;
    }
    for (i=0;i<n-2;i++)
    {
        for (j=0;j<m-2;j++)
        {
            plansza3[i][j]=0;
        }
    }
}

void Plansza::generator()
{
    ile = 20;
    ile_zostalo = 20;
    srand(time(0));
    while(ile>0)
    {
        i=1+rand()%(n-2);
        j=1+rand()%(m-2);
        if (plansza[i][j]==0)
        {
            plansza[i][j]=1;
            ile-=1;
        }
    }
    
    for (i=1;i<n-1;i++){
        for (j=1;j<m-1;j++){
            if (plansza[i][j]==0)
                suma=plansza[i-1][j-1]+plansza[i][j-1]+plansza[i+1][j-1]+plansza[i-1][j]+plansza[i+1][j]+plansza[i-1][j+1]+plansza[i][j+1]+plansza[i+1][j+1];
            else
                suma=9;
            plansza2[i-1][j-1]=suma;
            
        }
    }
}

string Plansza::state(int i, int j)
{
    if( plansza3[i][j] == 1 )
    {
        if( plansza2[i][j] == 0 )
        {
            return "boxblank";
        }
        else if ( plansza2[i][j] == 1 )
        {
            return "box1";
        }
        else if ( plansza2[i][j] == 2 )
        {
            return "box2";
        }
        else if ( plansza2[i][j] == 3 )
        {
            return "box3";
        }
        else if ( plansza2[i][j] == 4 )
        {
            return "box4";
        }
        else if ( plansza2[i][j] == 5 )
        {
            return "box5";
        }
        else if ( plansza2[i][j] == 6 )
        {
            return "box6";
        }
        else if ( plansza2[i][j] == 7 )
        {
            return "box7";
        }
        else if ( plansza2[i][j] == 8 )
        {
            return "box8";
        }
    }
    else if (plansza3[i][j] == 2)
    {
        return "boxflag";
    }
    else if (plansza3[i][j] == 0)
    {
        return "boxcover";
    }
    return "boxcover";
}

string Plansza::finish(int i, int j)
{
    if (plansza3[i][j] == 2)
    { 
        if (plansza2[i][j] == 9)
        {
            return "boxflag";
        }
        else
        {
            return "boxflagx";
        }
    }
    else if( plansza2[i][j] == 0 )
    {
        return "boxblank";
    }
    else if ( plansza2[i][j] == 1 )
    {
        return "box1";
    }
    else if ( plansza2[i][j] == 2 )
    {
        return "box2";
    }
    else if ( plansza2[i][j] == 3 )
    {
        return "box3";
    }
    else if ( plansza2[i][j] == 4 )
    {
        return "box4";
    }
    else if ( plansza2[i][j] == 5 )
    {
        return "box5";
    }
    else if ( plansza2[i][j] == 6 )
    {
        return "box6";
    }
    else if ( plansza2[i][j] == 7 )
    {
        return "box7";
    }
    else if ( plansza2[i][j] == 8 )
    {
        return "box8";
    }
    else if ( plansza2[i][j] == 9 )
    {
        return "boxbomb";
    }
    return "boxblank";
}
int Plansza::covercheck(int i, int j)
{
    return plansza3[i][j];
}


void Plansza::uncover(int i, int j)
{
    plansza3[i][j]=1;
}

bool Plansza::bombcheck(int i, int j)
{
    return plansza2[i][j]==9;
}

void Plansza::flag(int i, int j)
{
    plansza3[i][j]=2;
}

void Plansza::unflag(int i, int j)
{
    plansza3[i][j]=0;
}

