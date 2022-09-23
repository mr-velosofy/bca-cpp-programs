#include<iostream>
using namespace std;

int main(){
    long int n,a=0,n2;

    cout<<"\n\nEnter the Number :";
    cin>>n;

    n2=n;

    while (n>0)
    {
        a++;
        n=n/10;
    }
    cout<<"\nNumber of Digits in "<<n2<<" is "<<a<<endl;

    return 0;
}