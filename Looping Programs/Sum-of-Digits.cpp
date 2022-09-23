#include <iostream>
using namespace std;
int main(){
    long int n,sum=0;
    int m;
    
    cout<<"Enter a Number : ";
    cin>>n;
    
    int o=n;
    
    while(n>0){
        m=n%10;
        sum+=m;
        n=n/10;
    }
    cout<<"Sum of Digits in "<<o<<" is "<<sum<<endl;
}