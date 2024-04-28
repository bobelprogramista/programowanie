#include <iostream>

using namespace std;

int main(){
	
	int liczba;

	cout<<"wpisz liczbe: ";
	cin>>liczba;

	cout<<endl;

	cout<<"czynniki pierwsze: "<<endl;
	for (int b = 2; liczba > 1; ++b) {
		while (liczba % b == 0) {
		cout<<b<< " ";
		liczba /= b;
		}
	}
	
}
