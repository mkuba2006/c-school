#include <iostream>
using namespace std;

void podział(int liczba){
    if(liczba<10){
        cout<<liczba<<endl;
    }
    else{
        cout<<liczba%10<<endl;
        podział(liczba/10);
    }
}

int main() {
    int liczba;
    cout<<"podaj liczbę: ";
    cin>>liczba;
    podział(liczba);

    return 0;
}
