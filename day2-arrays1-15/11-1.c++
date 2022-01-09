// You are given an array of n+2 elements. All elements of the array are in range 1 to n. And all elements occur once except two numbers which occur twice. Find the two repeating numbers.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n+2];
    for (int i = 0; i < n+2; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n+2; i++)
    {
        arr[(arr[i]-1)%n] += n-1;
    }
    for (int i = 0; i < n+2; i++)
    {
        if(arr[i]>2*n-1){
            cout<<arr[i]%(n-1)<<endl;
        }
    }
    
    
    return 0;
}