#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter no.of rows:";
    cin >> r;

    int k=1;
    for (int row = 0; row < r; row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;

}