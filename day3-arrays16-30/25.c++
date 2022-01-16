// Given an array A[], write a function that segregates even and odd numbers. The functions should put all even numbers first, and then odd numbers
#include <bits/stdc++.h>
using namespace std;
int sergregateOddEven(int *arr, int n)
{
    int l = 0, r = n - 1;
    int change[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
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
    sergregateOddEven(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}