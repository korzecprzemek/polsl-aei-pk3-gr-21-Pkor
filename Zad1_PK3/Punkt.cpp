#include "Punkt.h"
Punkt::Punkt(Punkt& p)
{
	x = p.x;
	y = p.y;
}
Punkt::Punkt(float x_, float y_)
{
	x = x_;
	y = y_;
}
void Punkt::dodaj(Punkt& p)
{
	x += p.x;
	y += p.y;
}
void Punkt::dodaj(Punkt* p)
{
	x += p->x;
	y += p->y;
}
void Punkt::drukuj()
{
	cout << "Wspolrzedna x: " << x << endl;
	cout << "Wspolrzedna y: " << y << endl;
}
bool Punkt::porownaj(Punkt& p)
{
	if ((x != p.x) || (y != p.y))
		return false;
	else 
		return true;
}
