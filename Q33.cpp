#include<iostream>
using namespace std;
int main()
{
    int marks[3][5];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"Marks of "<<i+1<<" student in "<<j+1<<" subject: ";
            cin>>marks[i][j];
        }
    }
    cout<<"Marks of 1st student in 2nd subject: "<<marks[0][1]<<endl;
    cout<<"Marks of 3rd student in 5th subject: "<<marks[2][4];
    return 0;
}