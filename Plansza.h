#ifndef PLANSZA_H
#define PLANSZA_H

using namespace std;

class Plansza
{
public:
    int i;
    int j;
    int suma;
    const static int n=12;
    const static int m=12;
    int ile;
    int ile_zostalo;
    Plansza();
    void reset();
    void generator();
    string state(int i,int j);
    string finish(int i, int j);
    void uncover(int i, int j);
    int covercheck(int i, int j);
    bool bombcheck(int i, int j);
    void flag(int i, int j);
    void unflag(int i, int j);
private:
    int plansza[n][m];
    int plansza2[n-2][m-2];
    int plansza3[n-2][m-2];
    
};
#endif
