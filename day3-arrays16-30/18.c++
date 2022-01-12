// Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n - 1] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 2 * n - 1)
            cout << arr[i] % n << " ";
    }
    return 0;
}