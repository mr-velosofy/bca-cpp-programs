#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"\n---------------------------";
    cout << "\n| Leap Year Checker |";
    cout << "\n\nEnter a Year: ";
    cin >> yr;

    if ((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0))
    {
        cout << "\n"<<yr<< " is a LEAP YEAR"<<"\n";
    }
    else
    {
        cout << "\n"<<yr<< " is NOT a LEAP YEAR"<<"\n";
    }
    cout<<"---------------------------\n";
    return 0;
}