// Given an unsorted array arr[0..n-1] of size n, find the minimum length subarray arr[s..e] such that sorting this subarray makes the whole array sorted. 
#include <bits/stdc++.h>
using namespace std;
int find_start(int arr[], int n){
    int low = 0 , high = n-1, mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] >  arr[mid-1]){
            if(arr[mid+1] < arr[mid])
            
        }
    }
}
int main(){
    int n, start , end;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    start = find_start(arr, n);
    end = find_end(arr,n);
    
    return 0;
}