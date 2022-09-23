#include <iostream>
using namespace std;
void DecimalToBinary(int n) {
   int binary[100], num=n;
   int i = 0;
   while (n > 0) {
      binary[i] = n % 2;
      n = n / 2;
      i++;
   }

   cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
   cout << binary[j];
   cout<<endl;
}
int main() {
   DecimalToBinary(15);
   DecimalToBinary(10);
   DecimalToBinary(18);
   DecimalToBinary(27);
   return 0;
}