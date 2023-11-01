#include<iostream>
using namespace std;

int main()
{
    int n, pom, j, i;
    cout<<"Podaj wielkość zbioru: ";
    cin>>n;
    int tab[n];

    
    for(i=0; i<n; i++){
        cout<<"Podaj "<<i+1<<": ";
        cin>>tab[i];
    }

    for(i=1; i<n; i++){
        pom = tab[i];
        j = i-1;
        while(j>=0 && tab[j]>pom) {
            tab[j+1] = tab[j];
            --j;
        }
        tab[j+1] = pom;
    }     
    
    cout<<"\nElementy posortowaniem:\n";
    for(i=0; i<n; i++){
        cout<<tab[i]<<" ";
    }
    
    return 0;    
}