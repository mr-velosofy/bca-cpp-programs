#include <iostream>
using namespace std;
int main(){
    long int n,o,rev=0;
    int m;
    
    cout<<"Enter a Number : ";
    cin>>n;
    
    o=n;
    
    while(n>0){
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    cout<<"Reverse of "<<o<<" is "<<rev<<endl;
}