#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int it[n];
    for (int i = 0; i < n; i++)
    {
        cin >> it[i];
    }
    int temp = 0 , ans = 0 ;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            if(it[n-1] > it[0] && it[0] > it [1]) ans++;
            else if(it[n-1] < it[0] && it[0]<it [1]) ans++;
        }
        else if(i==n-1){
            if(it[n-2] > it[n-1] && it[n-1] > it[0]) ans++;
            else if(it[n-2] < it[n-1] && it[n-1] < it[0]) ans++;
        }
        else{
            if(it[i-1] > it[i] && it[i] > it[i + 1]) ans++;
            else if(it[i-1] < it[i] && it[i] < it[i + 1]) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}