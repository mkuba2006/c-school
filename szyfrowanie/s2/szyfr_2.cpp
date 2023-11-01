#include <iostream>
#include <string>

using namespace std;

int main()
{
string t_jawny, szyfrogram = "";
int i, klucz;
int kod;

cout << "Tekst jawny: ";
cin >> t_jawny;

cout << "Klucz: ";
cin >> klucz;

for(i = 0; i < t_jawny.size(); i++)
{
    kod = (t_jawny[i] + klucz - 'A') % 26 + 'A';
    szyfrogram = szyfrogram + char(kod);
}

cout << "Szyfrogram: " << szyfrogram;

return 0;
}