#include <iostream>
using namespace std;

long long int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    
    return fib(n-1) + fib(n-2) ;
}

int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    cout<<"ciąg fibonaciego: "<<fib(n)<<endl;
    return 0;
}
