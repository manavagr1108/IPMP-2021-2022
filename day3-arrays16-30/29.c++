// Rearrange positive and negative numbers in O(n) time and O(1) extra space
#include <bits/stdc++.h>
using namespace std;
int rearragePosNeg(int *arr, int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] > 0 && arr[r] < 0)
        {
            swap(arr[l], arr[r]);
        }
        else if (arr[l] > 0 && arr[r] > 0)
        {
            r--;
        }
        else if (arr[l] < 0 && arr[r] < 0)
        {
            swap(arr[l], arr[r]);
        }
        else if (arr[l] < 0 && arr[r] > 0)
        {
            l++;
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
    rearragePosNeg(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}