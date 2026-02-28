#include<iostream>
using namespace std;

void mainharkat(int arr[], int n)
{
    int max=arr[0], min=arr[0];
    float average=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
        average += arr[i];
    }
    cout<<"Maximum marks are: "<<max<<endl;
    cout<<"Minimum marks are: "<<min<<endl;
    cout<<"Average marks are: "<<average/n;
}
int main()
{
    int n=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the marks of "<<i+1<<" student: ";
        cin>>marks[i];
    }
    mainharkat(marks, n);
    return 0;
}