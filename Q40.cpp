#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() 
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string temp;
    bool spaceSeen = true;
    for (char c : s) 
    {
        if (isspace(c)) 
        {
            if (!spaceSeen) 
            {
                temp += ' ';
                spaceSeen = true;
            }
        } else 
        {
            temp += c;
            spaceSeen = false;
        }
    }
    if (!temp.empty() && temp.back() == ' ') temp.pop_back();

    if (!temp.empty()) 
    {
        temp[0] = toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++) temp[i] = tolower(temp[i]);
    }
    int words = 0, digits = 0, specials = 0;
    bool inWord = false;
    for (char c : temp) 
    {
        if (isalpha(c)) 
        {
            if (!inWord) { words++; inWord = true; }
        } else 
        {
            inWord = false;
            if (isdigit(c)) digits++;
            else if (!isspace(c)) specials++;
        }
    }
    bool valid = true;
    for (char c : temp) 
    {
        if (!(isalpha(c) || isdigit(c) || isspace(c))) 
        {
            valid = false;
            break;
        }
    }
    cout << "\nNormalized String: \"" << temp << "\"\n";
    cout << "Total Words: " << words << "\n";
    cout << "Total Digits: " << digits << "\n";
    cout << "Total Special Characters: " << specials << "\n";
    cout << "Validation: " << (valid ? "SUCCESS" : "FAILED") << "\n";
    return 0;
}