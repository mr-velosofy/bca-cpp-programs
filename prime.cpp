#include<iostream>
using namespace std;

int main(){

    int n,i=2,flag=0;

    cout<<"Enter a Number : ";
    cin>>n;

    while(i<n){
        if(n%i==0){
            flag=1;
        }
        i++;
    }
    if(flag==0){
        cout<<"Its a Prime Number\n";
    }
    else{
        cout<<"Its Not a Prime Number\n";
    }
    change
}
