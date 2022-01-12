// Two elements whose sum is closest to zero
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int l = 0, r = n - 1, sum = arr[r] + arr[l];
    int min_l = 0, min_r = n - 1, min_sum = arr[r] + arr[l];
    while (l < r)
    {
        sum = arr[r] + arr[l];
        if (sum < min_sum)
        {
            min_l = l;
            min_r = r;
            min_sum = sum;
        }
        if (sum < 0)
        {
            l++;
        }
        else if (sum > 0)
        {
            r--;
        }
        else
            break;
    }
    cout << "p1: " << arr[min_l] << " p2: " << arr[min_r] << endl;
    return 0;
}