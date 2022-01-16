// Segregate 0s and 1s in an array
#include <bits/stdc++.h>
using namespace std;
int sergregateOneZero(int *arr, int n)
{
    int l = 0, r = n - 1;
    int change[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]  == 0)
        {
            change[l] = arr[i];
            l++;
        }
        else
        {
            change[r] = arr[i];
            r--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = change[i];
    }
    return 0;
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
    sergregateOneZero(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}