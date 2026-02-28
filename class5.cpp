#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int x, y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    swap(x, y);
    cout<<"After swap values are: "<<x<<" and "<<y;
    return 0;
}
