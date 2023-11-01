#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 5;

void Losowe(int A[]){
    for(int i=0; i<N;i++){
        A[i]= rand()%100;
    }
}

void Wypisz(int A[]){
    for(int i=0; i<N;i++){
        cout<< A[i]<<" ";
    }
}

void Sortuj(int A[]){
    int i, j, nm, pom;
    for(i=0;i<N;i++){
        nm=i;
        for(j=i;j<N;j++){
            if(A[j]<A[nm]){
                nm=j;
            }
        }
        pom = A[i];
        A[i]= A[nm];
        A[nm] = pom;
    }   
}




int main()
{
    int A[N];
    srand(time(NULL));
    Losowe(A);
    Sortuj(A);
    Wypisz(A);
    return 0;
}
