// Find a triplet that sum to a given value
#include <bits/stdc++.h>
using namespace std;
int Merge(int *arr, int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0, temp[high - low + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] >= arr[j])
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
        else
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
int merge_sort(int *arr, int low, int high)
{
    int mid = (low + high) / 2;
    if (low >= high)
    {
        return 0;
    }
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}
int find_trip(int *arr, int n, int x)
{
    int start, end;
    merge_sort(arr, start, end);
    for (int i = 0; i < n; i++)
    {
        start = 1+i;
        end = n - 1;
        while(start < end){
            if(arr[start] + arr[i] + arr[end] == x){
                cout<< arr[start] << arr[i] << arr[end] ;
                return 0;
            }
            else if(arr[start] + arr[i] + arr[end] > x){
                end--;
            }
            else{
                start++;
            }
        }
    }
    
}
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
    find_trip(arr , n , x);
    return 0;
}