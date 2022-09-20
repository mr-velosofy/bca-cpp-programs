#include <iostream>
using namespace std;
int main(){
    long int n,o,rev=0;
    long int m;
    
    cout<<"Enter a Number : ";
    cin>>n;
    
    o=n;
    
    while(n>0){
        m=n%10;
        m=m*m*m;
        rev=rev+m;
        n=n/10;
    }
    if(o==rev){
        cout<<"Its a Armstrong Number.";
    }
    else{
        cout<<"Its Not a Armstrong Number.";
    }

    cout<<endl;
}