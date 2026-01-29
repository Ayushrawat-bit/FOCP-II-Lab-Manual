#include<iostream>
#include<string>
using namespace std;
int main()
{
    string id;
    cout<<"Enter your ID: ";
    cin>>id;
    int n = id.length();
    int i;
    for (i = 0; i < n / 2; i++) {
        if (id[i] != id[n - i - 1]) {
            cout << id << " is not a palindrome.";
            break;
        }
    }
    if (i == n / 2) cout << id << " is a palindrome.";
    return 0;
}