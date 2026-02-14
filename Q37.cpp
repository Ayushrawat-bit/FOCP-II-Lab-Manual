#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string username;
    cout << "Enter username (only letters and numbers): ";
    getline(cin, username);
    bool valid = true;
    for (int i = 0; i < username.length(); i++) 
    {
        if (username[i] == ' ') 
        {
            cout << "Username Denied: it contains a space." << endl;
            valid = false;
            break;
        }
        else if (!((username[i] >= 'A' && username[i] <= 'Z') ||
                   (username[i] >= 'a' && username[i] <= 'z') ||
                   (username[i] >= '0' && username[i] <= '9'))) 
                   {
            cout << "Username Denied: it contains a special character." << endl;
            valid = false;
            break;
        }
    }
    if (valid) 
    {
        cout << "Username Accepted." << endl;
    }
    return 0;
}