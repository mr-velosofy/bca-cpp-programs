#include<iostream>
using namespace std;

int main(){
    int octal[100],n,i=0,j;

    cout<<"Enter a Number : ";
    cin>>n;

    int n2=n;

    while(n>0){
        octal[i] = n%8;
        i++;
        n=n/8;
    }

    j=i-1;
    cout<<"Octal Form of "<<n2<<" is ";
    while(j>=0){
        cout<<octal[j];
        j--;
    }
    cout<<endl;
}