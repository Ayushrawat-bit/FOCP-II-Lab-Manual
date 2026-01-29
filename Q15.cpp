#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cout<<"Enter number of entries: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int current;
        cout<<"Enter the "<<i+1<<" entry: ";
        cin>>current;
        if(max<current)
        {
            max = current;
        }
    }
    cout<<"The biggest entry is: "<<max;
    return 0;
}