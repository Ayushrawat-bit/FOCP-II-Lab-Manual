#include <iostream>
using namespace std;

int main() 
{
    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;
    for (int i = 0; i < rows; i++) 
    {          
        for (int j = columns; j > i; j--) 
        {   
            cout << j << " ";
        }
        cout << endl; 
    }                        
    return 0;
}