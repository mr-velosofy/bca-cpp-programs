#include <iostream>  
using namespace std;  
int main () {  
    char alpha;  
    cout<<"\n\n| Vowel or Consonant Checker |";
    cout<<"\n\nEnter a Alphabet: ";
    cin>>alpha;

    if (alpha == 'a' || alpha == 'A' || alpha == 'e' || alpha == 'E'
     || alpha == 'i' || alpha == 'I' || alpha == 'o' || alpha == 'O'
      || alpha == 'u' || alpha == 'U')
    {
        cout<<"\n"<<alpha<<" is a Vowel."<<endl;
    }
    else{
        cout<<"\n"<<alpha<<" is a Consonant."<<endl;
    }

    return 0;
}