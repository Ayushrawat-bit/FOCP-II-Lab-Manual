#include<iostream>
using namespace std;
int main()
{
    string input;
    cout<<"Enter string: ";
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        if(input[i]>='A' && input[i]<='Z')
            input[i]+=32;
        else if(input[i]<='a'&& input[i]>='z')

    }
}