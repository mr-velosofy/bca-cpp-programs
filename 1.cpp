#include <iostream>
using namespace std;
int main()
{
    float radius, area;
    cout<<"\n---------------------------\n";
    cout << "Enter the Radius of Circle : ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "\nArea of Circle with "
              << radius << " cm radius is " << area<<" cm sq."<<endl;
    cout<<"---------------------------\n\n";

    return 0;
    
}