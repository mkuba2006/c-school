#include <iostream>
using namespace std;

long int potega(int n, int p) {
    long int wynik = 1;
    while (p > 0) {
        if (p % 2 == 1) {
            wynik *= n;
        }
        n *= n;
        p /= 2;
    }
    return wynik;
}

int main() {
    int n, p;
    cout << "Podaj podstawę: ";
    cin >> n;
    cout << "Podaj potęgę: ";
    cin >> p;
    long int wynik = potega(n, p);
    cout << "Wynik: " << wynik << endl;

    return 0;
}
