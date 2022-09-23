#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c = 0;

    cout << "Enter the number of terms : ";
    cin >> n;

    cout << "Fibonacci Series: ";
    long int i=1;

    while (i <= n) {
        // Prints the first two terms.
        if(i == 1) {
            cout << a << "  ";
        }
        if(i == 2) {
            cout << b << "  ";
        }
        c = a+b;
        a = b;
        b = c;
        
        cout << c << "  ";
        i++;
    }
    return 0;
}
