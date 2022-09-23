#include<iostream>
using namespace std;

int main(){

    long int n=1,sum=0;

    while (n<=10)
    {
        sum+=n;
        n++;
    }
    cout<<"Sum of Numbers from 1 to 10 is "<<sum<<endl;
}