#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) 
    {
        cout << n << " is not prime.";
    } 
    else 
    {
        int i;
        for (i = 2; i < n; i++) 
        {
            if (n % i == 0) 
            {
                cout << n << " is not prime.";
                break;
            }
        }
    if (i == n) 
        cout << n << " is prime.";
    }
    return 0;
}