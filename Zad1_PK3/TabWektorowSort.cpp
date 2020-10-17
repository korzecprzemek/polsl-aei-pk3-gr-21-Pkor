#include "TabWektorowSort.h"
void swap(Wektor* x, Wektor* y)
{
	Wektor tmp = *x;
	*x = *y;
	*y = tmp;
}
void TabWektorowSort::sortBabelkowe(Wektor* tab, int dl)
{
	for (int i = 0; i < dl - 1; i++)
	{
		for (int j = 0; j < dl - i - 1; j++)
		{
			if (this->u[j].dlugosc > this->u[j + 1].dlugosc)
				swap(&u[j], &u[j + 1]);
		}
	}
}
TabWektorowSort::TabWektorowSort(int dl)
{
	this->dl = dl;
	this->u = new Wektor[this->dl];
}

TabWektorowSort::TabWektorowSort(TablicaWektorow& tab)
{
	this->dl = tab.dl;
	this->u = new Wektor[this->dl];
	for (int i = 0; i < this->dl; i++)
	{
		u[i].dodaj(tab.u[i]);
	}
	this->sortBabelkowe(u, this->dl);
}
void TabWektorowSort::drukuj()
{
	for (int i = 0; i < this->dl; i++)
	{
		this->u[i].drukuj();
		cout << endl;
	}
}
TabWektorowSort::~TabWektorowSort()
{
	delete u;
}
//void TabWektorowSort::wstaw(Wektor& u)
//{
//	for (int i = 0; i < this->dl; i++)
//	{
//		if(u.dlugosc<this->u[i].dlugosc)
//	}
//}