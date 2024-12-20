#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int k = 5;
    k = k % n;
    if (k != 0)
    {

        //  optimal code (using reversing concept)
        for (int i = n - k, j = n - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        for (int i = 0, j = n - k - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        // code
        // int temp[k];

        // for (int i = 0; i < k; i++)
        // {
        //     temp[i] = arr[(n - k) + i];
        // }

        // for (int i = n - k - 1; i >= 0; i--)
        // {
        //     arr[i + k] = arr[i];
        // }

        // for (int i = 0; i < k; i++)
        // {
        //     arr[i] = arr[i];
        // }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}