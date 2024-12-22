#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter no.of rows:";
    cin >> r;

    // 1st mmethod
    for (int row = 0; row < r; row++)
    {
        int k = 0;
        for (int col = 0; col < 2 * r - 1; col++)
        {
            // cout<<"*";
            // space
            if (col < row)
            {
                cout << " ";
            }

            // star
            else if (k < (2 * r - 1 - (2 * row)))
            {
                cout << "*";
                k++;
            }

            // space
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // 2nd method
    // for(int i=0;i<r;i++)
    // {
    //     // spaces
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int k=0;k<2*r-1-(2*i);k++)
    //     {
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    return 0;
}