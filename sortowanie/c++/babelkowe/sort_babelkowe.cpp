#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"Ile liczb: "<<endl;
    cin>>n;

    int tab[n];
    for(i=0; i<n; i++) {
        cout<<"Podaj liczbe: "<<endl;
        cin>>tab[i];
    }

    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(tab[j] > tab[j+1]) {
                swap(tab[j], tab[j+1]);
            }
        }
    }

    for(i=0; i<n; i++) {
        cout<<tab[i]<<" ";
    }

    return 0;
}