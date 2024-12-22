#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter no.of rows:";
    cin >> r;

    // 1st Method  ( sir method )

    // approach --> first print full pyramid and then convert it into hollow
    // 2nd condition responsible hai star print krwane ke liye , to usme kuch condition apply krke hollow bnane ka try krenge. Full pyramid ke har line me 1st star pe 'k' ka value 0 hai or last star pe 'k' ka value 2*r-1 hai, to 2nd condition ke andr ek or condition lga denge jisme en sare 'k' pr hi sirf star print hoga or 1 aur condition ki jab i==r-1 hoga tb bhi star print hoga, iske alawa space print hoga
    
    for (int i = 0; i < r; i++)
    {
        int k = 0;
        for (int j = 0; j < 2 * r - 1; j++)
        {

            // 1st condition (printing starting spaces)
            if (j < r - 1 - i)
            {
                cout << " ";
            }

            // 2nd condition (printing star)
            else if (k < 2 * i + 1)
            {
                if (k == 0 || k == 2 * i || i == r - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

                k++;
            }

            // 3rd condition (printing end spaces)
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    //---------------------------------------------------------------------------------------
    // 2nd Method
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < 2 * r - 1; j++)
    //     {
    //         if (i + j == r - 1 || j - i == r - 1 || i == r - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    return 0;
}