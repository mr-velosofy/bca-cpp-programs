#include<iostream>
using namespace std;

int main(){
    int binary[100],n,i=0,j;

    cout<<"Enter a Number : ";
    cin>>n;

    int n2=n;

    while(n>0){
        binary[i] = n%2;
        i++;
        n=n/2;
    }

    j=i-1;
    cout<<"Binary Form of "<<n2<<" is ";
    while(j>=0){
        cout<<binary[j];
        j--;
    }
    cout<<endl;
}