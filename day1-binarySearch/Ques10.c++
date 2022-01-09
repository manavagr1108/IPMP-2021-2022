// There are 2 sorted arrays A and B of size n each. Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n). The complexity should be O(log(n)). 
#include <bits/stdc++.h>
using namespace std;
int median(int a[], int b[], int m , int n){
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
    int index_mid=(m+n);
    if((index_mid)%2==0){
        cout<<(c[index_mid/2-1] + c[index_mid/2])/2<<endl;
    }
    else{
        cout<<c[index_mid/2-1]<<endl;
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
    median(a,b,m,n);
    return 0;
}