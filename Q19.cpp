#include <iostream>
using namespace std;
int main() 
{
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    for (int n = start; n <= end; n++) 
    {
        if (n <= 1) continue;
        int i;
        for (i = 2; i < n; i++) 
        {
            if (n % i == 0) break;
        }
        if (i == n) cout << n << " ";
    }
    return 0;
}