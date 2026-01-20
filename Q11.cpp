#include<iostream>
using namespace std;
int main()
{
    int base_price,quantity, discount, total_price;
    cout<<"Enter base price: ";
    cin>>base_price;
    cout<<"Enter quantity: ";
    cin>>quantity;
    if(quantity>1000)
    {
        total_price = base_price*quantity;
        discount = 0.1*total_price;
        cout<<"Dicount would be: "<<discount<<endl<<"Net price is: "<<total_price-discount;
    }
    else
    {
        total_price = base_price*quantity;
        cout<<"Net price is: "<<total_price;
    }
    return 0;
}