#include<iostream>
using namespace std;
int sum(int n, int z);
float sum(float n, float z);
double sum(double n, double z);
int main()
{
    cout<<sum(11,15);
    cout<<sum(124.76,15.89);
    cout<<sum(11.89785f,27.82134f);
    return 0;
}
int sum(int a, int b)
{
    cout<<"\nINT sum is: ";
    return(a+b);
}
float sum(float a, float b)
{
    cout<<"\nFLOAT sum is: ";
    return(a+b);
}
double sum(double a, double b)
{
    cout<<"\nDOUBLE sum is: ";
    return(a+b);
}