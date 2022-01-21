// Move all zeroes to end of array
#include <bits/stdc++.h>
using namespace std;
int shiftzerotoright(int *arr, int n)
{
    int end = n - 1, n1 = n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[end]);
            n = n - 1;
            end--;
            i--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    shiftzerotoright(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}