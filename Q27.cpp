#include<iostream>
using namespace std;
int main()
{
    float price[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter item " <<i+1 <<" price: ";
        cin>>price[i];
    }
    float max = price[0];
    for(int j=0;j<10;j++)
    {
        if(max<price[j])
        {
            max = price[j];
        }
    }
    cout<<"Maximum price is: "<<max;
    return 0;
}