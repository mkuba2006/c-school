#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Ile liczb chcesz posortować? ";
	cin>>n;
	
	int tab[n];
	
	for(int i=0;i<n;i++){
		cin>>tab[i];
    }
	
	int mn;
    for(int i=0;i<n-1;i++){
      	mn = i;
        for(int j=i+1;j<n;j++){
            if(tab[j]<tab[mn]){
                mn = j;
            }
        }    
        swap(tab[i], tab[mn]);
    }
	
	
	for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
    }
	return 0;
}