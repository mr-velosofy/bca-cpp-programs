#include<iostream>
using namespace std;

int main(){

    int n,r,c;


    cout<<"Enter Size of Square Matrix : ";
    cin>>n;

    int a[n][n];

    for (r = 1; r<=n ; r++)
    {
        for (c = 1; c<= n ; c++)
        {
            cout<<"Enter A["<<r<<"]["<<c<<"] : ";
            cin>>a[r][c];
        }
        
    } 
    //printing the matrix
    cout<<"\nMATRIX A\n";

    for (r = 1; r<=n ; r++)
    {
        for (c = 1; c<= n ; c++)
        {
            cout<<a[r][c]<<"\t|\t";
        }
        cout<<endl;
    }

}
