#include <iostream>
using namespace std;


long long int SilniaITER(int n){
    int silnia=1, i;
    for(i=1;i<=n;i++){
        silnia*=i;
    }
    return silnia;
}


int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    cout<<SilniaITER(n)<<endl;
    return 0;
}
