#include <iostream>
using namespace std;
int main()
{
    int choice, a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter choice(1 for add,2 for sub,3 for multiply and 4 for divide): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Answer is: " << a + b;
        break;
    case 2:
        cout << "Answer is: " << a - b;
        break;
    case 3:
        cout << "Answer is: " << a * b;
        break;
    case 4:
        cout << "Answer is: " << a / b;
        break;
    }
    return 0;
}