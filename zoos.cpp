#include <iostream>
using namespace std;
int main() 
{
    string word;
    cin >> word;
    int countZ = 0, countO = 0;
    for (char ch : word) 
	{
    if (ch == 'z') 
		countZ++;
    else if (ch == 'o') 
		countO++;
    }
    if (2 * countZ == countO)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}