#include<iostream>
using namespace std;
int main()
{
    string name;
    int rno,Class,code;
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Enter roll no: ";
    cin>>rno;
    cout<<"Enter class: ";
    cin>>Class;
    cout<<"Enter code: ";
    cin>>code;
    cout<<"The student name is: "<<name<<endl<<"Your roll no is: "<<rno<<endl<<
    "Your class is: "<<Class<<endl<<"Your code is: "<<code;
    return 0;
}