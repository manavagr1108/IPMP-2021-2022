// Given two sorted arrays, find their union and intersection/
#include <bits/stdc++.h>
using namespace std;
int union_inser(int a[], int b[], int m, int n)
{
    int un[n + m];
    vector<int> in;
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] == b[j])
        {
            in.push_back(a[i]);
            un[k] = b[j];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            un[k] = a[i];
            k++;
            i++;
        }
        else
        {
            un[k] = b[j];
            j++;
            k++;
        }
    }
    for ( i = 0; i < n + m - in.size(); i++)
    {
        cout<<un[i]<<" ";
    }
    cout<<endl;
    
    for(auto p : in){
        cout<<p<<" ";
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    union_inser(a, b, m, n);

    return 0;
}