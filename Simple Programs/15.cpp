#include<iostream>
using namespace std;

int main(){

    float mm,p,c,b,m,com,per;

    cout<<"Enter Maximum Marks of Each Subject :";
    cin>>mm;

    cout<<"Enter marks of Physics :";
    cin>>p;

    cout<<"Enter marks of Chemistry :";
    cin>>c;

    cout<<"Enter marks of Biology :";
    cin>>b;

    cout<<"Enter marks of Mathematics :";
    cin>>m;

    cout<<"Enter marks of Computer :";
    cin>>com;

    per = ((p+c+b+m+com)/(5*mm)*100);

    cout<<"Percentage : "<<per<<endl;

    if (per >= 90){
        cout<<"Grade : A";
    }
        
    else if (per >= 80 && per<90){
        cout<<"Grade : B";
    }
        
    else if (per >= 70 && per<80){
        cout<<"Grade : C";
    }
        
    else if (per >= 60 && per<70){
        cout<<"Grade : D";
    }
        
    else if (per >= 50 && per<60){
        cout<<"Grade : E";
    }

    else{
        cout<<"Grade : F";
    }  
    cout<<endl;
}