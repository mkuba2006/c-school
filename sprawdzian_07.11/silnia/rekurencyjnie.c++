#include <iostream>
using namespace std;

long long int SilniaRek(short int n){
  if(n<2){
    return 1;  
  }
  return SilniaRek(n-1) * n;
}

int main()
{
  int n;
  cout<<"n:";
  cin>>n;
  cout<<SilniaRek(n);
  return 0;
}
