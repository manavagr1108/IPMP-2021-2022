// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last
#include <bits/stdc++.h>
using namespace std;
int sergregateOneZeroTwo(int *arr, int n, int two)
{
    int l = 0, r = n - 1 - two;
    int change[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]  == 0)
        {
            change[l] = arr[i];
            l++;
        }
        else if (arr[i] == 1)
        {
            change[r] = arr[i];
            r--;
        }
    }
    for (int i = 0; i < two; i++)
    {
        change[n - two + i] =  2;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = change[i];
    }
    return 0;
}
int main()
{
    int n , two =0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 2 ){
            two++;
        }
    }
    sergregateOneZeroTwo(arr, n , two);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}