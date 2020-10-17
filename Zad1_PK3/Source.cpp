#include "Punkt.h"
#include "Tablica.h"
#include "TablicaWektorow.h"
#include "TabWektorowSort.h"
int main()
{
	float TabX[] = {3,23,14,8};
	float TabY[] = {4,19,7,11};

	TablicaWektorow tab(TabX,TabY,4);
	cout << "Nieposortowana tablica: " << endl;
	tab.drukuj();
	cout << "Posortowana tablica: " << endl;
	cout << "----------------------------------------" << endl;
	TabWektorowSort tab1(tab);
	tab1.drukuj();

	//
	//p1 = p1 + p2;
	//p1.drukuj();
	//p2.dodaj(p1);
	//p1.drukuj();
	//p2.drukuj();
	//cout << endl;
	//
	//float TabX[] = { 1,2,3,4 };
	//float TabY[] = { 5,6,7,8 };
	//
	//Tablica t1(TabY,TabX,4);
	//Tablica t2(TabX, TabY, 4);
	//Tablica t3(4);// t3 i t4 defaultowe wartosci (0)
	//Tablica t4(4);
	//
	//cout << "Tablica nr 1: " << endl;
	//t1.drukuj();
	//
	//cout << "Tablica nr 2: " << endl;
	//t2.drukuj();
	//
	//cout << "Dodawanie wartosci tablicy nr 1 i tablicy nr 2" << endl;
	//cout << "Tablica nr 1 po zmianie: " << endl;
	//t1.dodaj(t2);
	//t1.drukuj();
	//
	//cout << "Dopisanie wartosci tablicy nr 2 do tablicy nr 1 (polaczenie tablic)" << endl;
	//t1.polacz(t2);
	//t1.drukuj();
	//
	//bool czy_rowne = t1.porownaj(t2);
	//cout <<"Sprawdzam czy t1 i t2 sa takie same: "<< czy_rowne << endl;
	//cout << "Tablica nr 3: " << endl;
	//t3.drukuj();
	//
	//cout << "Tablica nr 4: " << endl;
	//t4.drukuj();
	//
	//czy_rowne = t3.porownaj(t4);
	//cout <<"Sprawdzam czy t3 i t4 sa takie same: "<< czy_rowne << endl;
	
	return 0;
}
