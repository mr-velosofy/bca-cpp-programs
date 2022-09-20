#include<iostream>
using namespace std;

int main(){

    float a,b;
    int ch;

    cout<<"Enter the First Number : ";
    cin>>a;

    cout<<"Enter the Second Number : ";
    cin>>b;

    cout<<"Operations to be Performed\n\n1.Addition\n2.Substraction\n3.Multiplication\n4.Dividation\n5.Modulus\n\n";

    cout<<"Enter the Choice :- ";
    cin>>ch;

    switch(ch){
        case 1:
        cout<<"The Addition is :- "<<a+b;
        break;

        case 2:
        cout<<"The Substraction is :- "<<a-b;
        break;
        
        case 3:
        cout<<"The Multiplication is :- "<<a*b;
        break;
        
        case 4:
        cout<<"The Dividation is :- "<<a/b;
        break;
        
        case 5:
        cout<<"The Modulus is :- "<<int(a)%int(b);
        break;
        

        default :
        cout<<"Invalid Choice!!";
        break;

    }
cout<<endl;
return 0;
}

