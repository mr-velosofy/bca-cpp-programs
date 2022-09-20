#include<iostream>
using namespace std;

int main(){

    float a,b,c;

    cout<<"Enter First Number(A) : ";
    cin>>a;

    cout<<"Enter Second Number(B) : ";
    cin>>b;

    cout<<"Enter Third Number(C) : ";
    cin>>c;

    if(a==b && b==c){
        cout<<"A, B and C are Equal.";
    } 
    
    else{
        if(a==b || b==c || a==c){
            if(a==b){
                if(a>c){
                    cout<<"A and B are the Greatest.";
                }
                else{
                    cout<<"C is the Greatest.";
                }
            }
            else if (b==c){
                if(b>a){
                    cout<<"B and C are the Greatest.";
                }
                else{
                    cout<<"A is the Greatest.";
                }
            }
            else{
                if(a>b){
                    cout<<"A and C are the Greatest.";
                }
                else{
                    cout<<"B is the Greatest.";
                }
            }
        }
        else{
            if(a>b && a>c){
                cout<<"A is the Greatest.";
            }
            else if(b>c && b>a){
                cout<<"B is the Greatest.";
            }
            else{
                cout<<"C is the Greatest.";
            }
        }

    }
    cout<<endl;

    return 0;
}