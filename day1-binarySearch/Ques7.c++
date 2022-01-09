// Given an array of n distinct integers sorted in ascending order, write a function that returns a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1. Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative. 
#include <bits/stdc++.h>
using namespace std;
int fixed_point(int arr[], int n){
    int low = 0, high = n-1 , mid ;
    while(low<high){
        mid = (low + high) / 2;
        if (mid < arr[mid])
        {
            high = mid - 1;
        }
        else if (mid > arr[mid])
        {
            low = mid + 1;
        }
        else if (mid == arr[mid])
        {
            return mid;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int point =fixed_point(array,n);
    if(point != -1){
        cout<<"the fixed point is :"<<point;
    }
    else{
        cout <<"there is no fixed_point";
    }
    return 0;
}