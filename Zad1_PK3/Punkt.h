#pragma once
#include <iostream>
using namespace std;
class Punkt
{
private:
	float x;
	float y;
public:
	Punkt(Punkt& p);
	Punkt(float x_ = 0, float y_ = 0);
	void dodaj(Punkt& p);//dodaj do siebie wspolrzedne punktu p
	void dodaj(Punkt* p);//
	void drukuj();
	bool porownaj(Punkt& p); // metoda pomocnicza
};
