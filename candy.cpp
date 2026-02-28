/*Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a *class Candy* with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method,
and display them using displayCandy().*/

#include <iostream>
using namespace std;
class Candy
{
    string colour;
    int points;

public:
    void setCandy(string c, int p);
    void displayCandy();
};
void Candy::setCandy(string c, int p)
{
    colour = c;
    points = p;
}
void Candy::displayCandy()
{
    cout << "\nColour of the Candy : " << colour;
    cout << "\nYour points are : " << points;
}
int main()
{
    Candy c1, c2;
    c1.setCandy("Blue", 25);
    c2.setCandy("Red", 30);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}
