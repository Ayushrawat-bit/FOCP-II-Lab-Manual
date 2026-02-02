#include<iostream>
using namespace std;
int main()
{
    float temp[30];
    for(int i=0;i<30;i++)
    {
        cout<<"Enter day "<<i+1<<" temperature: ";
        cin>>temp[i];
    }
    float min = temp[0];
    for(int j=0;j<30;j++)
    {
        if(min>temp[j])
        {
            min = temp[j];
        }
    }
    cout<<"Minimum temperature of the month is: "<<min;
    return 0;
}