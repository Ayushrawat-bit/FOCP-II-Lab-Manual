#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string S;
    cin >> S;
    int n = S.size();
    for (int i = 0; i < n / 2; i++) 
	{
        if (S[i] != S[n - i - 1]) 
		{
            cout << "NO" << endl;
            return 0;  
        }
    }
    cout << "YES" << endl;
    return 0;
}