#include<iostream>
using namespace std;

int main(){
     int n,r=1,a;

     cout<<"Enter Number of Rows : ";
     cin>>n;
     a=n;
     r=n;

     while(r>=1){
        int c=r;
        while(c>=1){
            cout<<a<<"\t";
            c--;
        }
        cout<<"\n";
        r--;
        a--;
     }
}
