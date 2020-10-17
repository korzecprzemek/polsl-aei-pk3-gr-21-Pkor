#pragma once
#include "Wektor.h"

class TablicaWektorow
{
	friend class TabWektorowSort;
private:
	int dl;
	Wektor* u;
public:
	TablicaWektorow(int dl=0);
	TablicaWektorow(TablicaWektorow& tab);
	TablicaWektorow(float* x, float* y, int dl);
	~TablicaWektorow();
	void dodaj(TablicaWektorow& tab);
	void drukuj();
	bool porownaj(TablicaWektorow& tab);
};