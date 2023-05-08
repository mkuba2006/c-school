#include
#include

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
////////////////////////////////////////////////////////////////////
#include
#include

using namespace std;

int main()
{
string t_jawny, szyfrogram = "";
int i, klucz;
int kod;

cout << "Tekst jawny: ";
getline(cin, t_jawny);

cout << "Klucz: ";
cin >> klucz;

for(i = 0; i < t_jawny.size(); i++)
{
    if(toupper(t_jawny[i])>='A' && toupper(t_jawny[i])<='Z')
    {
        kod = t_jawny[i] + klucz;

        if ((t_jawny[i]<='Z' && kod>'Z') || (t_jawny[i]>='a' && kod>'z'))
            kod = kod - 26;

        szyfrogram = szyfrogram + char(kod);
    }
    else
        szyfrogram = szyfrogram + t_jawny[i];
}

cout << "Szyfrogram: " << szyfrogram;

return 0;
}
///////////////////////////////////////////////////////////////////////

#include
#include
#include

using namespace std;

string Cezar(string s, int klucz)
{
string szyfrogram = "";
int kod;
for(int i = 0; i < s.size(); i++)
{
if(toupper(s[i])>='A' && toupper(s[i])<='Z')
{
kod = s[i] + klucz;

        if ((s[i]<='Z' && kod>'Z') || (s[i]>='a' && kod>'z'))
            kod = kod - 26;

        szyfrogram = szyfrogram + char(kod);
    }
    else
        szyfrogram = szyfrogram + s[i];
}

return szyfrogram;
}

int main()
{
ifstream wejscie("tekst_jawny_1.txt");
ofstream wyjscie("szyfrogram.txt");

string s;
int klucz;


cout << "Klucz: ";
cin >> klucz;

while(!wejscie.eof())
{
    getline(wejscie, s);
    wyjscie << Cezar(s, klucz) << endl;
}

wejscie.close();
wyjscie.close();

cout << "Plik szyfrogram.txt zostal utworzony";

return 0;
}