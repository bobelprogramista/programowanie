#include <iostream>
using namespace std;

void generujLiczbyPierwsze(int iloscLiczbPierwszych) {
    int znalezioneLiczby = 0;
    int liczba = 2;

    cout << "Generowanie " << iloscLiczbPierwszych << " liczb pierwszych:" << endl;

    while (znalezioneLiczby < iloscLiczbPierwszych) {
        bool jestPierwsza = true;

        for (int dzielnik = 2; dzielnik <= liczba / 2; ++dzielnik) {
            if (liczba % dzielnik == 0) {
                jestPierwsza = false;
                break;
            }
        }

        if (jestPierwsza) {
            cout << "Znaleziono liczbe: " << liczba << endl;
            znalezioneLiczby++;
        }
        liczba++;
    }

    cout << "Wygenerowano " << iloscLiczbPierwszych << " liczb." << endl;
}

int main() {
    int n;
    cout << "Podaj ilosc liczb pierwszych do wygenerowania: ";
    cin >> n;
    generujLiczbyPierwsze(n);
    return 0;
}
