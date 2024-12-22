#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter no.of  rows:";
    cin >> r;

    // 1st method

    // first half part
    for (int row = 0; row < r / 2; row++)
    {
        // spaces
        for (int col = 0; col < r / 2 - 1 - row; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // next half part
    for (int row = 0; row < r / 2; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < r / 2 - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }



    // 2nd method

    // 1st part [Full Pyramid]
    // for (int row = 0; row < r; row++)
    // {
    //     // spaces
    //     for (int col = 0; col < r - 1 - row; col++)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // // 2nd part [Inverted Full Pyramid]
    // for (int row = 0; row < r; row++)
    // {
    //     // spaces
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int col = 0; col < r - row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    return 0;
}
