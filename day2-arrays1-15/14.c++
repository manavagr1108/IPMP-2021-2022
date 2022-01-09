// Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s. 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , ans=0 , temp=0;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }   
    }
    for (int i = 0; i < n; i++)
    {
        temp = 0 ;
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j] == 1) temp++;
        }
        if(temp>ans) ans = i;
    }
    cout<<ans<<endl;
    return 0;
}
