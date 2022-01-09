// You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] ,sum =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<(n+1)*(n+2)/2 - sum;
    
    return 0;
}