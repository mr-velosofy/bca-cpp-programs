#include <iostream>  
using namespace std;  
int main () { 
    int d;  
    cout<<"\n\n| Week Days Printer |";
    cout<<"\n\nEnter Day Number : ";
    cin>>d;

    switch (d)
    {
    case 1:
    cout<<"Its Monday."<<endl;
        break;
    case 2:
    cout<<"Its Tuesday."<<endl;
        break;
    case 3:
    cout<<"Its Wednesday."<<endl;
        break;
    case 4:
    cout<<"Its Thursday."<<endl;
        break;
    case 5:
    cout<<"Its Friday."<<endl;
        break;
    case 6:
    cout<<"Its Saturday."<<endl;
        break;
    case 7:
    cout<<"Its Sunday."<<endl;
        break;
    
    default:
    cout<<"Invalid Day Number.\n";
        break;
    }
}