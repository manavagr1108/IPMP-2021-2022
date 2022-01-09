// Given an arr of n integers, find the 3 elements such that a[i] < a[j] < a[k] and i < j < k in 0(n) time. If there are multiple such triplets, then print any one of them
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start=0,mid =1 ,end=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<arr[start]){
            start = i ;
            mid = i+1;
        }
    }  
    for (int i = 0; i < n; i++)
    {
        if(arr[start] < arr[mid]) break;
        else start++;
    }
    cout<<arr[start]<<" "<<arr[mid]<<" "<<arr[end];
    return 0;
}