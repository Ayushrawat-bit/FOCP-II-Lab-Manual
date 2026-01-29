#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) sum += i;
    }
    if (sum == n) 
    {
        cout << n << " is a Perfect number.";
        return 0;
    }
    int temp = n, digits = 0;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    int armSum = 0;
    while (temp > 0) 
    {
        int d = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) power *= d;
        armSum += power;
        temp /= 10;
    }
    if (armSum == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is Neither Perfect nor Armstrong.";

    return 0;
}