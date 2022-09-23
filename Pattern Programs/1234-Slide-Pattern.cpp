#include<iostream>
using namespace std;

int main(){
     int n,r=1,a=1;

     cout<<"Enter Number of Rows : ";
     cin>>n;

     while(r<=n){
        int c=1;
        while(c<=r){
            cout<<a<<" ";
            c++;
            a++;
        }
        cout<<"\n";
        r++;
     }
}