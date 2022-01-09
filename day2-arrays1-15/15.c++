// Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number.  
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , min_ele, max_diff;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    max_diff = arr[1] - arr[0];
    min_ele = arr[0];
    for (int i = 0; i < n; i++)
    {
     if(arr[i] - min_ele > max_diff){
         max_diff = arr[i] - min_ele;
     } 
     if(arr[i] < min_ele){
         min_ele = arr[i];
     }
    }
    cout<<min_ele<<" "<<max_diff<<endl;
    return 0;
}