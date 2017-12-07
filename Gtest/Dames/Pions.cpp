#include <iostream>
#include "Pions.h"
#include <cstdlib>
using namespace std ;


pion::pion(int x,int y,int color):m_x(x),m_y(y),m_color(color){
	living=true;
}

void pion::die()
{
	living=false;
}

void pion::moving(int x,int y)
{
    m_x=x;
    m_y=y;
}



int pion::getX()
{
	return m_x;
}

int pion::getY()
{
	return m_y;
}

bool pion::getLife()
{
	return living;
}

