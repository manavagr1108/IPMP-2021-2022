// Given an array arr[] of n integers, construct a Product Array prod[] (of same size) such that prod[i] is equal to the product of all the elements of arr[] except arr[i]. Solve it without division operator in O(n) time
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,pro = 1;
    cin >> n;
    int arr[n],prod[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prod[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        prod[i] = pro;
        pro *= arr[i];
    }
    pro = 1;
    for (int i = n-1; i >= 0; i--)
    {
        prod[i] *= pro;
        pro *= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
    }
    
    
    
    return 0;
}