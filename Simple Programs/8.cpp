#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"\n---------------------------\n";
    cout<<"Enter a Character : ";
    cin>>ch;
    cout<<endl;
    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
        cout<<ch<<" is a Alphabet.";
    }

    else if (ch>=48 && ch<=57){
        cout<<ch<<" is a Digit.";
    }
    
    else{
        cout<<ch<<" is a Special Symbol.";
    }
    cout<<"\n---------------------------\n";
    return 0;
}