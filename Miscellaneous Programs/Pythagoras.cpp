#include<iostream>
#include<math.h>
using namespace std;

int main(){

float h=0,b=0,p=0,a;

cout<<"Enter 0(Zero) for Unknown Values !!\n\n";

cout<<"Enter Perpendicular : ";
cin>>p;

cout<<"Enter Base : ";
cin>>b;

cout<<"Enter Hypotenuse : ";
cin>>h;

if (p==0)
{
    a=(h*h)-(b*b);
    a=sqrt(a);
    cout<<"\nPerpendicular : "<<a<<endl;
}

else if (b==0)
{
    a=(h*h)-(p*p);
    a=sqrt(a);
    cout<<"\nBase : "<<a<<endl;
}

else if (h==0)
{
    a=(p*p)+(b*b);
    a=sqrt(a);
    cout<<"\nHypotenuse : "<<a<<endl;
}

else
{
    cout<<"An Eror Occured !!";
}

}

