// Print the elements of an array in the decreasing frequency if 2 numbers have same frequency then print the one which came first. 
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
    sort(arr , arr + n);
    int len = 1 , temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != temp){
            len ++ ;
            temp = arr[i] ;
        }
    }
    int mat[len][2] , t=0;
    temp = arr[0];
    mat[0][0] = arr[0];
    mat[0][1] = 1;
    for (int i = 0; i < len; i++)
    {
        if(arr[i] == temp){
            mat[t][1] ++;
        }      
        else{
            t++;
            mat[t][0] = arr[i];
            mat[t][1] = 1;
        }
    }
    
    return 0;
}