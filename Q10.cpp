#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        cout << "It is a leap year and it has 29 days in february";
    }
    else
    {
        cout << "It isn't a leap year";
    }
    return 0;
}