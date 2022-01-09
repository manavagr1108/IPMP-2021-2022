// Given an array of integers which is initially increasing and then decreasing, find the maximum value in the array.

#include <bits/stdc++.h>
using namespace std;
int find_max(int arr[], int n)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        else if(arr[mid] > arr[mid + 1]){
            if(arr[mid] > arr [mid -1]){
                return mid;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int index = find_max(array, n);
    if(index!=-1)cout<< array[index];
    return 0;
}