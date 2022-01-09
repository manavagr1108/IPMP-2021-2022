// An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.
#include <bits/stdc++.h>
using namespace std;
int find_pivot(int arr[], int n){
    int low = 0, high = n-1;
    int mid = (low+high)/2;
    while(low < high){
        if(arr[low] > arr[mid] && arr[mid] > arr[high]){
            low = mid;
        }
        else if(arr[low] > arr[mid] && arr[mid] < arr[high]){
            high = mid;
        }
    }
    return high;
}
int main(){
    int N;
    cin>>N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin>>array[i];
    }

    int pivot = find_pivot(array,N);
    cout<<pivot;
    return 0;
}