// Given an array A[] and a number x, check for pair in A[] with sum as x
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "Valid pair exits";
                return 0;
            }
        }
    }
    cout << "No calid pair exits";
    return 0;
}