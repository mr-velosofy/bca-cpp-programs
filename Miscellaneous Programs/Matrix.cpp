#include<iostream>
using namespace std;

int main(){

    int r,c,i,j;


    cout<<"Enter Rows of Matrix: ";
    cin>>r;

    cout<<"Enter Columns of Matrix : ";
    cin>>c;

    int a[r][c],trans[r][c];

    for (i = 1; i<= r ; i++)
    {
        for (j = 1; j<= c ; j++)
        {
            cout<<"Enter A["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    } 


    //printing the matrix
    cout<<"\n---MATRIX A---\n";

    for (i = 1; i<= r ; i++)
    {
        for (j = 1; j<= c ; j++)
        {
            cout<<a[i][j]<<"\t|\t";
        }
        cout<<endl;
    }

}
