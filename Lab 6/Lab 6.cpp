#include <iostream>
using namespace std;
//Zadanie 1:
/*
int a = 20;
int b = 10;
int suma(int liczba, int liczba2);
int suma(int liczba, int liczba2) {
	return liczba + liczba2;
}*/
//Zadanie 2:
/*
int tab[10];
int rozmiar = 10;
int usun(int tab[], int rozmiar, int indeks);
int usun(int tab[], int rozmiar, int indeks) {
	for (int i = indeks; i < rozmiar - 1; i++) {
		tab[i] = tab[i + 1];
	}
	return rozmiar - 1;
}*/
//Zadanie 3:
/*float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;
float przelicz(float temperaturaC) {
	return temperaturaC + 273.15;
}
void zapisz(float podana, float przeliczona)
{
	if (INDEKS < 10)
	{
		TEMP1[INDEKS] = podana;
		TEMP2[INDEKS] = przeliczona;
		INDEKS++;
	}
	else
	{
		cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane." << endl;
	}
}
void wyswietl()
{
	for (int i = 0; i < INDEKS; i++)
	{
		cout << "Temperatura w C: " << TEMP1[i] << " | Temperatura w K: " << TEMP2[i] << endl;
	}
}*/
int main()
{	
	/*cout << "Zadanie 1:" << endl << endl;
	cout << "Suma globalnych a i b: " << suma(a, b) << endl;
	int a = 1;
	int b = 2;
	cout << "Suma lokalnych a i b: " << suma(a, b) << endl;
	*/
	/*cout << "Zadanie 2: " << endl << endl;
	for (int i = 0; i < rozmiar; i++) {
		cout << "Podaj " << (i+1)  << " element tablicy : " << endl;
		cin >> tab[i];
	}
	cout << "Ktory element tablicy chcesz usunac? (0-9)" << endl;
	int indeks;
	cin >> indeks;
	rozmiar = usun(tab, rozmiar, indeks);
	cout << "Tablica po usunieciu elementu o indeksie " << indeks << " :" << endl;
	for (int i = 0; i < rozmiar; i++) {
		cout << tab[i] << " ";
	}
	return 0;*/
	/*cout << "Zadanie 3: " << endl << endl;
	float t;
	for (int i = 0; i < 3; i++)
	{
		cout << "Podaj temperature w C: ";
		cin >> t;

		float wynik = przelicz(t);
		zapisz(t, wynik);
	}

	cout << "--- Zapisane wyniki ---" << endl;
	wyswietl();

	return 0;*/

}
