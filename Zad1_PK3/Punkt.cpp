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
bool Punkt::operator==(Punkt& p)//przeciazenie
{
	return(this->porownaj(p));
}
Punkt& Punkt::operator+=(Punkt& p)
{
	this->dodaj(p);
	return *this;
}
void Punkt::operator=(Punkt& p)
{
	x = p.x;
	y = p.y;
}
Punkt& Punkt::operator+(Punkt& p)
{
	Punkt tmp;
	tmp.x = this->x + p.x;
	tmp.y = this->y + p.y;
	return tmp;
}
