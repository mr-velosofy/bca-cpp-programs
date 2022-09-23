#include<iostream>
using namespace std;

int main(){

    long int n,f=1;

    cout<<"Enter a Number : ";
    cin>>n;

    long int n2=n;

    while(n!=0){
        f*=n;
        n--;
    }
    cout<<"Factorial of "<<n2<<" is "<<f<<endl;
}