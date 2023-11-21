#include <iostream>

using namespace std;

int main(){
//Zadanie 5
int sz = 0;
int w = 0;

//pytanie o wartosci

cout << "podaj szerokosc";
cin >> sz;

cout << "podaj wysokosc";
cin >> w;

//rysowanie

	for  (int a=0; a<sz; a+=1){ //SZEROKOSC
		cout <<"*";
		for(int b=0; b<w; b+=1){
			cout<<endl;
		}
}

}