#pragma once
#include "TablicaWektorow.h"

class TabWektorowSort  : public TablicaWektorow
{
public:
	TabWektorowSort(int dl);
	TabWektorowSort(TablicaWektorow& tab);
	//TabWektorowSort(TabWektorowSort* tab);
	//TabWektorowSort(float* x,float*y,int dl);
	~TabWektorowSort();
	void wstaw(Wektor& u);
	void sortBabelkowe(Wektor* tab, int dl);
	void drukuj();
};
