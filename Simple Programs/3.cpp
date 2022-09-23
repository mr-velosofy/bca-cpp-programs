#include<iostream>
using namespace std;

int main(){
    
    float a,b;
    cout<<"\n------------------------------\n";
    cout<<"Enter Value for A : ";
    cin>>a;
    cout<<"Enter Value for B : ";
    cin>>b;

    cout<<"------------------------------\nBefore Swapping";
    cout<<"\nA : "<<a;
    cout<<"\nB : "<<b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"\n-------------------------------\nAfter Swapping";

    cout<<"\nA : "<<a;
    cout<<"\nB : "<<b;
    cout<<"\n-------------------------------"<<endl;

    return 0;
}