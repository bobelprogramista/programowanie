#include <iostream>

using namespace std;

int main(){

	// deklaracja zmiennych
	short zmienna = 2;
	float zmiennoprzecinkowa = 3.21;
	string tekst = "tekst";
	char znak = 'A';
	bool logiczny = false;
	
	cout << "a";
	cout << endl;
	cout << "wszystko wina dawida";
	cout << endl; // koniec lini
	cout << "liczba: " << zmienna; //wyswietlenie zmiennych
	
	string wyraz;
	cout << endl;
	cout << "wpisz cos: ";
	cin >> wyraz;
	cout << "wpisales " << wyraz;
	
	// imie i wiek
	cout << endl;
	string imie;
	float wiek;
	cout << "wpisz imie ";
	cin >> imie;
	cout << endl;
	cout << "wpisz wiek ";
	cin >> wiek;
	cout << endl;
	cout << "nazywasz sie " << imie << " i masz " << wiek << " lat";
	
	return 0;
}