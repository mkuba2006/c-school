#include<iostream>
using namespace std;
const int N = 10;

void Losowe(int A[]){
    for(int i=0; i<N;i++){
        A[i] = rand()%100;
    }
}

void Sortuj(int A[]){
    int i, j, pom;
    for(i=0; i<N; i++){
        pom = A[i];
        j = i-1;
        while(j>=0 && A[j]>pom) {
            A[j+1] = A[j];
            --j;
        }
        A[j+1] = pom;
    }        
}

void Wypisz(int A[]){
    for(int i=0; i<N;i++){
        cout<< A[i]<<" ";
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
