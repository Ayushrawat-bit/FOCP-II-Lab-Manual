#include <iostream>
using namespace std;
int main()
{
    int sc1, sc2, sc3;
    cout << "Enter score 1: ";
    cin >> sc1;
    cout << "Enter score 2: ";
    cin >> sc2;
    cout << "Enter score 3: ";
    cin >> sc3;
    if (sc1 > sc2 && sc1 > sc3)
    {
        cout << "Player 1 is the winner";
    }
    else if (sc2 > sc1 && sc2 > sc3)
    {
        cout << "Player 2 is the winner";
    }
    else if (sc3 > sc1 && sc3 > sc2)
    {
        cout << "Player 3 is the winner";
    }
    else
    {
        cout << "There is not a single winner";
    }
    return 0;
}