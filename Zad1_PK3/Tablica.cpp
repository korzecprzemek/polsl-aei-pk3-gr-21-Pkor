#include "Tablica.h"

Tablica::Tablica(int dl_)
{
	dl = dl_;
	w = new Punkt[dl];
}
Tablica::Tablica(Tablica& w_)
{
	dl = w_.dl;
	w = new Punkt[dl];
	for (int i = 0; i < dl; i++)
	{
		w[i].dodaj(w_.w[i]);
	}
}
Tablica::Tablica(float* x, float* y, int dl_)
{
	dl = dl_;
	w = new Punkt[dl];
	for (int i = 0; i < dl; i++)
	{
		Punkt tmp(x[i], y[i]);
		w[i].dodaj(tmp);
	}
}
Tablica::~Tablica()
{
	delete w;
}

void Tablica::dodaj(Tablica &w_)// dodanie odpowiadajacych wartosci dwoch tablic
{
	if (w_.dl == dl) //funkcja wykona sie tylko dla tablic o rownych wartosciach
	{
		for (int i = 0; i < dl; i++)
			w[i].dodaj(w_.w[i]);
	}
}
void Tablica::polacz(Tablica &w_)// dopisanie wartosci tablicy podanej w argumencie do tablicy bazowej
{
	int stara_dl = dl;
	dl += w_.dl;
	Punkt* nowa_tab = new Punkt[dl];
	for (int i = 0; i <stara_dl; i++)
	{
		nowa_tab[i].dodaj(w[i]);
	}
	for (int i = stara_dl; i < dl; i++)
	{
		nowa_tab[i].dodaj(w_.w[i-stara_dl]);
	}
	w = nowa_tab;
}
void Tablica::drukuj()
{
	for (int i = 0; i < dl; i++)
	{
		w[i].drukuj();
		cout << endl;
	}
}
bool Tablica::porownaj(Tablica& w_)
{
	if (dl != w_.dl)
		return false;
	for (int i = 0; i < dl; i++)
	{
		if (w[i].porownaj(w_.w[i]) == false)
		return false;
	}
	return true;
}