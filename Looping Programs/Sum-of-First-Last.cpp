#include <iostream>
using namespace std;
int main(){
    long int n,fst=0;
    int m;
    
    cout<<"Enter a Number : ";
    cin>>n;
    
    int o=n;

    int lst=n%10;

    while(n>0){
        m=n%10;
        fst=m;
        n=n/10;
    }
    cout<<"Sum of Digits in "<<o<<" is "<<fst+lst<<endl;
}