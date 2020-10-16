#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Car
{
public:
    void run_car()
    {
        cout << "Car Starting\nMoving Foward..." << endl
             << endl;
    }
    void movecar_left()
    {
        cout << "Turning Left" << endl;
    }
    void movecar_right()
    {
        cout << "Turning Right" << endl;
    }
    void obstacle()
    {
        cout << "Obstacle Avoided" << endl;
    }
};

int main()
{
    Car c;
    char ch = 's';
    cout << "INSTRUCTIONS" << endl;
    cout << "d to move right\na to move left\ne to avoid obstacle\nq to quit game" << endl
         << endl;
    c.run_car();
    while (1)
    {
        if (((rand() % 10) == 0) || ((rand() % 10) == 1) || ((rand() % 10) == 2) || ((rand() % 10) == 3))
        {
            cout << "Take a Right Turn" << endl;
            cin >> ch;
            if (ch == 'd')
            {
                c.movecar_right();
            }
            else if (ch == 'q')
            {
                cout << "QUITTING GAME..." << endl;
                break;
            }
            else
            {
                cout << "***GAME OVER***" << endl;
            }
            cout << endl;
        }
        else if (((rand() % 10) == 4) || ((rand() % 10) == 5) || ((rand() % 10) == 6) || ((rand() % 10) == 7))
        {
            cout << "Take a Left Turn" << endl;
            cin >> ch;
            if (ch == 'a')
            {
                c.movecar_left();
            }
            else if (ch == 'q')
            {
                cout << "QUITTING GAME..." << endl;
                break;
            }
            else
            {
                cout << "***GAME OVER***" << endl;
            }
            cout << endl;
        }
        else if (((rand() % 10) == 8) || ((rand() % 10) == 9))
        {
            cout << "Obstacle Ahead!!! Avoid it..." << endl;
            cin >> ch;
            if (ch == 'e')
            {
                c.obstacle();
            }
            else if (ch == 'q')
            {
                cout << "QUITTING GAME..." << endl;
                break;
            }
            else
            {
                cout << "***GAME OVER***" << endl;
            }
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}
