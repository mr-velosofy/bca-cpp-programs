#include<iostream>
using namespace std;

int main(){

    int n[10],i=0,j=0;

    while(i<10){
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>n[i];
        i++;
    }

    while(j<i){
        cout<<"Element Number "<<j+1<<" of Array : "<<n[j]<<endl;
        j++;
    }

}