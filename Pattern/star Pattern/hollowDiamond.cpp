#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no.of rows:";
    cin >> n;

    // method 1

    // upper half part
    for (int row = 0; row < n; row++)
    {
        int k = 0;

        for (int col = 0; col < 2 * n - 1; col++)
        {
            // spaces
            if (col < n - 1 - row)
            {
                cout << " ";
            }

            // stars and mid spaces
            else if (k < 2 * row + 1)
            {
                // stars
                if (k == 0 || k == 2 * row)
                {
                    cout << "*";
                }
                // mid spaces
                else
                {
                    cout << " ";
                }

                k++;
            }

            // remaining part in grid
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // lower half part
    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < 2 * n - 1; col++)
        {
            // spaces
            if (col < row)
            {
                cout << " ";
            }

            // stars and mid spaces
            else if (k < ((2 * n - 1) - (2 * row)))
            {
                // stars
                if (k == 0 || k == (2 * n - 1) - (2 * row) - 1)
                {
                    cout << "*";
                }
                // mid spaces
                else
                {
                    cout << " ";
                }

                k++;
            }

            // remaining grid part
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }



    // method 2

    // upper half part
    // for (int row = 0; row < n; row++)
    // {
    //     // spaces
    //     for(int col=0;col<n-1-row;col++)
    //     {
    //         cout<<" ";
    //     }

    //     // stars and mid spaces
    //     for(int col=0;col<2*row+1;col++)
    //     {
    //         // stars
    //         if(col==0||col==2*row)
    //         {
    //             cout<<"*";
    //         }
    //         // mid spaces
    //         else{
    //             cout<<" ";
    //         }
    //     }

    //     cout<<endl;
    // }

    // // lower half part
    // for(int row=0;row<n;row++)
    // {
    //     // spaces
    //     for(int col=0;col<row;col++)
    //     {
    //         cout<<" ";
    //     }

    //     // stars and mid spaces
    //     for(int col=0;col<2*n-1-2*row;col++)
    //     {
    //         // stars
    //         if(col==0||col==2*n-1-2*row-1)
    //         {
    //             cout<<"*";
    //         }
    //         // mid spaces
    //         else{
    //             cout<<" ";
    //         }
    //     }

    //     cout<<endl;
    // }

    return 0;
}