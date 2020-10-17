#include "TablicaWektorow.h"

TablicaWektorow::TablicaWektorow(int dl)
{
	this->dl = dl;
	this->u = new Wektor[this->dl];
}
TablicaWektorow::TablicaWektorow(TablicaWektorow& tab)
{
	this->dl = tab.dl;
	this->u = new Wektor[this->dl];
	for (int i = 0; i < this->dl; i++)
	{
		u[i].dodaj(tab.u[i]);
	}
}
TablicaWektorow::TablicaWektorow(float* x, float* y, int dl)
{
	this->dl = dl;
	this->u = new Wektor[dl];
	for (int i = 0; i < this->dl; i++)
	{
		Wektor tmp(x[i], y[i]);
		u[i].dodaj(tmp);
	}
}
TablicaWektorow::~TablicaWektorow()
{
	delete u;
}
void TablicaWektorow::dodaj(TablicaWektorow& tab)
{
	int stara_dl = this->dl;
	this->dl += tab.dl;
	Wektor* nowa_tab = new Wektor[this->dl];
	for (int i = 0; i < stara_dl; i++)
	{
		nowa_tab[i].dodaj(this->u[i]);
	}
	for (int i = stara_dl; i < this->dl; i++)
	{
		nowa_tab[i].dodaj(tab.u[i]);
	}
	u = nowa_tab;
}
void TablicaWektorow::drukuj()
{
	for (int i = 0; i < this->dl; i++)
	{
		this->u[i].drukuj();
		cout << endl;
	}
}
bool TablicaWektorow::porownaj(TablicaWektorow& tab)
{
	if (this->dl != tab.dl)
		return false;
	for (int i = 0; i < this->dl; i++)
	{
		if (u[i].porownaj(tab.u[i]) == false)
			return false;
	}
	return true;
}