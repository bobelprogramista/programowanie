#include <iostream>

using namespace std;

int main(){
	int szukana;
	int tab[20];
	
	tab[0] = 2;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = 5;
	tab[4] = 6;
	tab[5] = 9;
	tab[6] = 4;
	tab[7] = 2;
	tab[8] = 0;
	tab[9] = 0;
	tab[10] = 1;
	tab[11] = 5;
	tab[12] = 3;
	tab[13] = 2;
	tab[14] = 6;
	tab[15] = 8;
	tab[16] = 9;
	tab[17] = 9;
	tab[18] = 2;
	tab[19] = 3;
	
	// {2, 1, 1, 5, 6, 9, 4, 2, 0, 0, 1, 5, 3, 2, 6, 8, 9, 9, 2, 3};
	int index;
	
	cout<<"wpisz szukana liczbe: ";
	cin>>szukana;
	
	for(index=0; index<20; index++){
		if(tab[index] == szukana){
			cout<<"w komorce "<<index<<" znaleziono "<<szukana<<endl;
		}else{
			cout<<"w komorce "<<index<<" nie znaleziono "<<szukana<<endl;	
		}	
	}
	
}