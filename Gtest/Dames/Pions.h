#include <iostream>
using namespace std;

class pion{

public :
    pion(int x, int y, int color);

    void moving(int x, int y);
    void attacking(pion &target);

    void die();
    bool getLife();

    int getX();
    int getY();

    int getColor();

protected :

    int m_x;
    int m_y;
    int m_color;

    Plateau plateau;// la classe plateau possède un vecteur de cases sur lesquelles on peut atterrir
    bool living;

};

class dame : public pion{

public :

    dame(int x, int y,int color);
    virtual void moving() ;



}
;