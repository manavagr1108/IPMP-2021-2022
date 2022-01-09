// There are two sorted arrays. First one is of size m+n containing only m elements. Another one is of size n and contains n elements. Merge these two arrays into the first array of size m+n such that the output is sorted.
#include <bits/stdc++.h>
using namespace std;
int merge_arrays(int a[] , int b[] , int m , int n){
    int i =0 , j =0 , c[m+n];
    while(j!=n || i!=m){
        if(a[i] >= b[j]){
            c[i+j] = b[j];
            j++;
        }
        else{
            c[i+j] = a[i];
            i++;
        }
    }    
    while(j!=n){
        c[i+j] = b[j];
        j++;
    }
    while(i!=m){
        c[i+j] = a[i];
        i++;
    }
    for (i = 0; i < m+n; i++)
    {
        cout<<c[i]<<" ";
    }    
}
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
    merge_arrays(a,b,m,n);
    cout<<endl;
    return 0;
}