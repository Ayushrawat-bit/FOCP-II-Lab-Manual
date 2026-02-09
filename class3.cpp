#include<iostream>
using namespace std;

void welcome(void);
void welcome(string);
int main()
{
    welcome();
    welcome("Rambo");
    return 0;
}
void welcome()
{
    cout<<"Welcome ";
}
void welcome(string name)
{
    cout<<name;
}