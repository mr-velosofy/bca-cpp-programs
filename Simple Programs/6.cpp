#include <iostream>  
using namespace std;  
int main () {  
    int yr;  
    cout<<"\n---------------------------";
    cout<<"\n| Leap Year Checker |";
    cout<<"\n\nEnter a Year: ";
    cin>>yr;


    if(yr%4==0){
        if(yr%100==0){
            if(yr%400==0){
                cout<<"\n"<<yr<<" is a LEAP YEAR."<<endl;
            }
            else{
                cout<<"\n"<<yr<<" is NOT a LEAP YEAR."<<endl;
            }
        }
        else{
            cout<<"\n"<<yr<<" is a LEAP YEAR."<<endl;
        }
    }
    else{
        cout<<"\n"<<yr<<" is NOT a LEAP YEAR."<<endl;
    }
    cout<<"---------------------------\n";
    return 0;
}