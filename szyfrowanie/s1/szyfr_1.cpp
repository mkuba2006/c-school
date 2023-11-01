#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t, szyfrogram = "";
    int i, klucz;
    int kod;

    cout << "Tekst jawny: ";
    getline(cin, t);

    cout << "Klucz: ";
    cin >> klucz;

    for(i = 0; i < t.size(); i++)
    {
        if(toupper(t[i])>='A' && toupper(t[i])<='Z'){
            kod = t[i] + klucz;
            if ((t[i]<='Z' && kod>'Z') || (t[i]>='a' && kod>'z')){
                kod = kod - 26;
            }
            szyfrogram = szyfrogram + char(kod);
        }
        else{
            szyfrogram = szyfrogram + t[i];
        }
    }

    cout << "Szyfrogram: " << szyfrogram;

    return 0;
}
