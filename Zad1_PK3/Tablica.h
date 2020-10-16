	#pragma once
#include "Punkt.h"
class Tablica
{
private:
	Punkt* w;
	int dl;
public:
	Tablica(int dl = 0);
	Tablica(Tablica &w_);
	Tablica(float *x,float *y,int dl);
	~Tablica();
	void dodaj(Tablica& w_);//dodaje do siebie tablice w_
	void polacz(Tablica& w_);//dodaje do siebie tablice w_
	void drukuj();
	bool porownaj(Tablica& w);//porownanie z Tablica w_
};