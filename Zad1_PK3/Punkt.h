#pragma once
#include <iostream>
using namespace std;
class Punkt
{
	friend class Wektor;
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
	bool operator==(Punkt& p);//przeciazenie
	Punkt& operator+=(Punkt& p);
	void operator=(Punkt& p);
	Punkt& operator+(Punkt& p);
};
