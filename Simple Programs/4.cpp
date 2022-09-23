#include <iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"\n---------------------------\n";
    cout << "Enter Temperature (in Celcius) : ";
    cin >> c;
    f = (c*1.8)+32;
    cout <<"\n"<< c<<" degrees Celsius is "
              << f<<" degrees Fahrenheit."<<endl;
    cout<<"---------------------------\n\n";

    return 0;
}