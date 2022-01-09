// Write a C function to find if a given integer x appears more than n/2 times in a sorted array of n integers.
// Basically, we need to write a function say isMajority() that takes an array (arr[] ), array’s size (n) and a number to be searched (x) as parameters and returns true if x is a majority element (present more than n/2 times).

#include <bits/stdc++.h>

int binary_search(int array[], int val, int n, int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == val && array[mid - 1] != val)
        {
            return mid;
        }
        else if (array[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
bool isMajority(int arr[], int n, int index, int val)
{
    int count = 0;
    for (int i = 0;; i++)
    {
        if (arr[i + index] == val)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if (count >= n / 2)
        return 1;
    else
        return 0;
}

using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int val;
    cin >> val;
    int index = binary_search(array, val, n, 0, n - 1);
    if (index == -1)
    {
        cout << "false";
    }
    else
    {
        if (isMajority(array, n, index, val))
            cout << "True";
        else
            cout << "False";
    }

    return 0;
}