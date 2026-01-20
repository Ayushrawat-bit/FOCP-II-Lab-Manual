#include<iostream>
using namespace std;
int main()
{
    int employees,basic_salary,bonus,net_salary;
    cout<<"Enter number of employees: ";
    cin>>employees;
    cout<<"Enter basic salary: ";
    cin>>basic_salary;
    bonus = 0.12 * basic_salary;
    net_salary = basic_salary + bonus;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Net salary for one employee: "<<net_salary<<"\n";
    cout<<"total amount: "<<net_salary*employees;
    return 0;
}