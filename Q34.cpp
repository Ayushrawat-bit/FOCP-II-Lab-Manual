#include<iostream>
using namespace std;
int main()
{
    int matrix_1[3][3], matrix_2[3][3], add[3][3];
    cout<<"First lets fill matrix one"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element of "<<i+1<<" row and "<<j+1<<" coloumn: ";
            cin>>matrix_1[i][j];
        }
    }
    cout<<"Now time for matrix two"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element of "<<i+1<<" row and "<<j+1<<" coloumn: ";
            cin>>matrix_2[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            add[i][j] = matrix_1[i][j] + matrix_2[i][j];
            cout<<"Element at "<<i+1<<" row and "<<j+1<<" column is: "<<add[i][j]<<endl;
        }
    }
    return 0;
}