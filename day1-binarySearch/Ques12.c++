// Find the minimum element in a sorted and rotated array

// An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.
#include <bits/stdc++.h>
using namespace std;
int find_pivot(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] < arr[mid+1] && arr[mid] < arr[mid-1]){
            cout<<arr[mid]<<" ";
            return mid;
        }
        else if(arr[mid] > arr[low]){
            low = mid + 1;
        }
        else if(arr[mid] < arr[high]) {
            high = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int pivot = find_pivot(array, N);
    cout << pivot;
    return 0;
}