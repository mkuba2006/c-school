#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 10;

void Losowe(int A[]){
    for(int i=0; i<N;i++){
        A[i]= rand()%100;
    }
}

void Wypisz(int A[]){
    for(int i=0; i<N;i++){
        cout<< A[i]<<", ";
    }
    cout<<endl;
}


void skroc(int A[]){
     for(int i=0;i<N;i++){
        int liczba = A[i];
        int suma = 0;
        int cyfra=0;
        while(liczba>0)
        {
            cyfra = liczba % 10;
            suma += cyfra;
            liczba = liczba / 10;
        }
        cout<<"Suma["<<i<<"] "<<suma<<endl;
        A[i]=suma;
    }  
}







void Sortuj(int A[]){
    int i, j, z;
     for(i=0;i<N;i++){
        for(j=0;j<N-1;j++){
            if(A[j]>A[j+1]){
                z = A[j];
                A[j] = A[j+1]; 
                A[j+1] = z; 
            }
        }
    }   
}




int main()
{
    int A[N];
    srand(time(NULL));
    Losowe(A);
    Wypisz(A);
    skroc(A);
    Sortuj(A);
    Wypisz(A);
    return 0;
}
