#include <bits/stdc++.h>
using namespace std;
void swap( int *a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<*a<<" "<<b<<endl;
}
long long smallestNumber(long long num)
{
    long long  num1 = num;
    int i, n, ans = 0 , temp;
    for (i = 0; num != 0; i++)
    {
        num = num / 10;
    }
    n = i;
    int arr[n];
    num = abs(num1);
    for (i = 0; i < n; i++)
    {
        arr[i] = num % 10;
        num = num / 10;
    }
    sort(arr, arr + n);
    num = num1;
    if (num1 > 0)
    {
        for ( i = 0; i < n; i++)
        {
            if(arr[i] == 0){
                swap(&arr[i], &arr[i+1]);
            }
            else {
                break;
            }
        }
        
        ans=arr[0];
        for (i = 1; i < n; i++)
        {
            ans = ans * 10 + arr[i];
        }
        return ans;
    }
    else{
        for (i = n-1; i >= 0; i--)
        {
            
            ans= ans*10 + arr[i];
            cout<<ans<<endl;
        }
        return -ans;
    }
}
int main()
{
    long long int n;
    cin >> n;
    cout << smallestNumber(n);
    return 0;
}