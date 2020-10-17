#include "Wektor.h"

//Wektor(float dlugosc, float kat);
//Wektor(Wektor& u);
//Wektor(Wektor* u);
//bool operator ==(Wektor& u);

Wektor::Wektor(float x, float y)
{
	this->x = x;
	this->y = y;
	dlugosc = sqrt(x*x + y * y);
	kat = atan2(y,x)*180/ M_PI;
}
Wektor::Wektor(Wektor& u)
{
	this->x = u.x;
	this->y = u.y;
	this->dlugosc = u.dlugosc;
	this->kat = u.kat;
}
Wektor::Wektor(Wektor* u)
{

	this->x = u->x;
	this->y = u->y;
	this->dlugosc = u->dlugosc;
	this->kat = u->kat;
}
bool Wektor::porownaj(Wektor& u)
{
	if ((this->dlugosc != u.dlugosc) || this->kat != u.kat)
		return false;
	else
		return true;
}
bool Wektor::operator==(Wektor& u)
{
	return this->porownaj(u);
}
void Wektor::dodaj(Wektor& u)
{
	this->x += u.x;
	this->y += u.y;
	this->dlugosc += u.dlugosc;
	this->kat += u.kat;
}
void Wektor::drukuj()
{
	cout << "Wspolrzedna x: " << this->x << endl;
	cout << "Wspolrzedna y: " << this->y << endl;
	cout << "Dlugosc wektora: " << this->dlugosc << endl;
	cout << "Kat wektora: " << this->kat << endl;
}