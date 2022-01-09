// You are given an array of n+2 elements. All elements of the array are in range 1 to n. And all elements occur once except two numbers which occur twice. Find the two repeating numbers.
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans = 1;
    while(n>1){
        ans=ans*n;
        n--;
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    int arr[n+2];
    int s = 0 , p = 1 , x, y , diff;
    for (int i = 0; i < n+2; i++)
    {
        cin>>arr[i];
        s+=arr[i];
        p*=arr[i];
    }
    s = s - (n*(n+1))/2;
    p = p / fact(n);

    diff = sqrt(s*s - 4*p);

    x = (diff+s)/2;
    y = (s-diff)/2;
    cout<<x<<" "<<y;
    
    return 0;
}