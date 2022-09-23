#include<iostream>
using namespace std;

int main(){
     int n,r;

     cout<<"Enter Number of Rows : ";
     cin>>n;
     r=n;

     while(r>=1){
        int c=r;
        while(c>=1){
            cout<<"* ";
            c--;
        }
        cout<<"\n";
        r--;
     }
}