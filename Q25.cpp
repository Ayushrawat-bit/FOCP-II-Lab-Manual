#include<iostream>
using namespace std;
int main()
{
    int cap_alphabet=0,small_alphabet=0,number=0,special_char=0;
    string password;
    cout<<"Enter password: ";
    getline(cin,password);
    for(int i=0;i<password.length();i++)
    {
        if(password[i]>='A' && password[i]<='Z')
            cap_alphabet++;
        else if(password[i]>='a' && password[i]<='z')
            small_alphabet++;
        else if(password[i]>='0' && password[i]<='9')
            number++;
        else if(password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='!'||password[i]=='&'||password[i]=='*')
            special_char++;
    }
    if(cap_alphabet==0)
        cout<<"Password needs a capital alphabet";
    else if(small_alphabet==0)
        cout<<"Password needs a small alphabet";
    else if(number==0)
        cout<<"Password needs a number";
    else if(special_char==0)
        cout<<"Password needs a special character";
    else
        cout<<"Password is valid";
    return 0;
}