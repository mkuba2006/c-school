#include <iostream>
using namespace std;

long int potega(int n, int p) {
    long int wynik;
    if (p == 0) {
        return 1;
    } 
    else if (p % 2 == 0) {
        wynik = potega(n, p / 2);
        return wynik * wynik;
    } 
    else {
        wynik = potega(n, (p - 1) / 2);
        return n * wynik * wynik;
    }
}

int main() {
    int n, p;
    cout << "Podaj podstawę: ";
    cin >> n;
    cout << "Podaj potęgę: ";
    cin >> p;
    int wynik = potega(n, p);
    cout<< wynik<<endl;

    return 0;
}
