#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter character: ";
    cin >> a;
    if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
    {
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            cout << "It is a vowel";
        }
        else
        {
            cout << "It is a consonant";
        }
    }
    else if (a >= 48 && a <= 57)
    {
        cout << "It is a number";
    }
    else
    {
        cout << "It is neither a number of a alphabet";
    }
    return 0;
}