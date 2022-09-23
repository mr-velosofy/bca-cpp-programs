#include <iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"\n---------------------------\n";
    cout << "Enter the Principle Amount : ";
    cin >> p;
    cout << "Enter the Rate of Interest (per month) : ";
    cin >> r;
    cout << "Enter the Time Period (in months) : ";
    cin >> t;
    si = (p*r*t)/100;
    cout << "\nSimple Interest on Priciple of "
              << p << " for " <<t<<" month(s) at the rate of "<<r<<" % is " << si<<endl;
    cout<<"---------------------------\n\n";

    return 0;
}