#include<iostream>
using namespace std;

int main(){

    
    float num;

    cout<<"\n---------------------------\n";
    cout<<"Enter a Number : ";
    cin>>num;

    if (num == 0){
        cout<<"\n"<<num<<" is a ZERO.\n";
    }
    else if(num>0){
        cout<<"\n"<<num<<" is a Positive Number.\n";
    }
    else{
        cout<<"\n"<<num<<" is a Ngative Number.\n";
    }
     
    
    cout<<"---------------------------\n";
    return 0;
    
}