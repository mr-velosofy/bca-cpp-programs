#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"\n---------------------------\n";
    cout<<"Enter a Alphabet : ";
    cin>>ch;
    cout<<endl;
    if (ch>=65 && ch<=90){
        cout<<ch<<" is a Uppercase.";
    }

    else if (ch>=97 && ch<=122){
        cout<<ch<<" is a Lowercase.";
    }
    
    else{
        cout<<ch<<" is Not a Alphabet.";
    }
    cout<<"\n---------------------------\n";
    return 0;
}