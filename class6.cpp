#include <iostream>
using namespace std;

class car 
{
    private:
    string car_pin = "12fr453d6";
    string car_seft = "6675";
    string car_Id = "1467";

    public: 
    string car_brand = "BMW";
    string car_range = "8 lakhs";
    string car_model = "High end";
};
int main() 
{
    car c1;
    cout << "Brand: " << c1.car_brand << endl;
    cout << "Range: " << c1.car_range << endl;
    cout << "Model: " << c1.car_model << endl;
    return 0;
}