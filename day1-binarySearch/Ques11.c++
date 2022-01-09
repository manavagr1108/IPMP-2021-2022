// Given an array of random numbers. Find longest increasing subsequence (LIS) in the array. I know many of you might have read recursive and dynamic programming (DP) solutions. There are few requests for O(N log N) algo in the forum posts.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,m;
    cin >> m >> n;
    int a[m+n] , b[n];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    return 0;
}