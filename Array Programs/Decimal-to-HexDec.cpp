#include<iostream>
using namespace std;
int main (){
    int num2, num, i = 1, j, r;
    char hex[50];

    cout<<"Enter a Decimal Number : ";
    cin>>num2;
    num = num2;
    while (num > 0)
    {
        r = num % 16;
        if (r < 10){
            hex[i++] = r + 48;
        }
        else{
        hex[i++] = r + 55;  //55 bcz, a starts from 65 and we want 10 = a so 
        }                   //for a , we have 55+10(r)=65 to get a.
        num = num / 16;
    }
    cout<< "\nHexadecimal equivalent of " << num2 << " is : ";
    for (j = i-1; j > 0; j--){
        cout<< hex[j];
    }
    cout<<endl;
    return 0;
}