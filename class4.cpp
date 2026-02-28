#include<iostream>
using namespace std; 
void welcome(string="User");
int main()
{
    welcome();
    welcome("Section A");
    return 0;
}
void welcome(string name)
{
    cout<<"\nWelcome "<<name;
}