#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter no.of rows:";
    cin >> r;

    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
