#include<iostream>
using namespace std;

int main(){

    int n[10],i=0,sum=0;

    while(i<10){
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>n[i];
        sum += n[i];
        i++;
    }
    cout<<sum;

}