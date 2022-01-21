#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0, B[high -low + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            B[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i-low];
    }
    
}

int merge_sort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
         mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int n;
    cout<<"enter the array length"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the unsorted array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    cout<<"the sorted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}
