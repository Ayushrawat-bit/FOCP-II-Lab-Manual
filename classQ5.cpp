#include <iostream>
using namespace std;
int sum(int a, int b, int c=0, int d=0, int e=0) 
{
    return (a+b+c+d+e);
}
int main() 
{
    cout << "\nMarks for 2 papers: " << sum(10, 20);
    cout << "\nMarks for 3 papers: " << sum(87, 56, 78);
    cout << "\nMarks for 4 papers: " << sum(57, 89, 90, 11);
    cout << "\nMarks for 5 papers: " << sum(45, 56, 78, 87, 99);
    return 0;
}