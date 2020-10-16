#include "Punkt.h"
#include <cmath>
//Punkt(Punkt& p);
//Punkt(float x_ = 0, float y_ = 0);
//void dodaj(Punkt& p);//dodaj do siebie wspolrzedne punktu p
//void dodaj(Punkt* p);//
//void drukuj();
//bool porownaj(Punkt& p); // metoda pomocnicza
//bool operator==(Punkt& p);//przeciazenie
//Punkt& operator+=(Punkt& p);
//void operator=(Punkt& p);
//Punkt& operator+(Punkt& p);
class Wektor :public Punkt
{
private:
	float dlugosc;
	float kat;

public:
	Wektor(float x=0, float y=0);
	Wektor(Wektor& u);
	Wektor(Wektor* u);
	bool porownaj(Wektor& u);
	void dodaj(Wektor& u);
	void drukuj();
	bool operator ==(Wektor& u);
};