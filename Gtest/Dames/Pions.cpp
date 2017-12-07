#include <iostream>
#include "Pions.h"
#include <cstdlib>
using namespace std ;


pion::pion(int x,int y,int color):m_x(x),m_y(y),m_color(color){
	living=true;
}

void animal::die()
{
	living=false;
}

void pion::moving(int x,int y)
{
    m_x=x;
    m_y=y;
}
bool pion::isBlocked

void animal::attacking(animal &target)
{
	char a,b;
	a=chooseAttack();
	b=target.chooseAttack();

	switch (a)
	{
	case 'p':

		switch (b)
		{
		case 'p':
			suddenDeath(target);
			break;

		case 'r':
			target.die();
			break;

		case 's':
			die();
			break;
		}
		break;


	case 'r':

		switch (b)
		{
		case 'r':
			suddenDeath(target);
			break;

		case 's':
			target.die();
			break;

		case 'p':
			die();
			break;
		}
		break;


	case 's':

		switch (b)
		{
		case 's':
			suddenDeath(target);
			break;

		case 'p':
			target.die();
			break;

		case 'r':
			die();
			break;
		}
		break;

	}

}

void animal::suddenDeath(animal &target)
{
	float p= (float)rand() / (float)RAND_MAX;

	if(p<0.5)
	{
		die();
	}
	else
	{
		target.die();
	}

}

int animal::getX()
{
	return m_x;
}

int animal::getY()
{
	return m_y;
}

bool animal::getLife()
{
	return living;
}



int animal::getSpecies()
{
	return species;
}