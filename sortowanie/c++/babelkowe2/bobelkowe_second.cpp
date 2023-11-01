#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 20;

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
    int i, j, z;
     for(i=0;i<N;i++){
        for(j=0;j<N;j++){
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
    Sortuj(A);
    Wypisz(A);
    return 0;
}
