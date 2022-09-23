#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c = 0;

    cout << "Enter the Number for Limit : ";
    cin >> n;

    cout << "Fibonacci Series: "<<a<<" "<<b<<" ";
    c=a+b;
    while (c <= n) {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
        
    }
    return 0;
}
