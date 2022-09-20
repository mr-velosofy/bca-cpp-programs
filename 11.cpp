#include <iostream>  
using namespace std;  
int main () { 
    char alpha;  
    cout<<"\n\n| Vowel or Consonant Checker |";
    cout<<"\n\nEnter a Alphabet: ";
    cin>>alpha;

    switch (alpha)
    {
    case 'a': case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
    
    cout<<alpha<<" is a Vowel."<<endl;
        break;
    
    default:
    cout<<alpha<<" is a Consonant."<<endl;
        break;
    }
}