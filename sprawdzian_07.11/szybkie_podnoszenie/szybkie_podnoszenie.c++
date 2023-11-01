#include <iostream>
using namespace std;

long int szybkie_potegowanie(int podstawa, int potega) {
    long int wynik;
    if (potega == 0) {
        return 1;
    } 
    else if (potega % 2 == 0) {
        wynik = szybkie_potegowanie(podstawa, potega / 2);
        return wynik * wynik;
    } 
    else {
        wynik = szybkie_potegowanie(podstawa, (potega - 1) / 2);
        return podstawa * wynik * wynik;
    }
}

int main() {
    int podstawa, potega;
    cout << "Podaj podstawę: ";
    cin >> podstawa;
    cout << "Podaj potęgę: ";
    cin >> potega;
    int wynik = szybkie_potegowanie(podstawa, potega);
    cout<< wynik<<endl;

    return 0;
}
