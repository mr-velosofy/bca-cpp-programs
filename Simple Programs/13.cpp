#include <iostream>  
using namespace std;  
int main () { 
    int m;  
    cout<<"\n\n| Month Number of Days |";
    cout<<"\n\nEnter Month Number : ";
    cin>>m;

    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"This Month have 31 Days.\n";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"This Month have 30 Days.\n";
            break;

        case 2:
        cout<<"This Month have 28/29 Days.\n";
            break;

        default :
        cout<<"Invalid Month Number.\n";
    }
}