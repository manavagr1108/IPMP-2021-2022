// Is it possible to find two numbers whose difference is minimum in O(n) time
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min_diff, max_ele;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // can be done my merge sort, with O(nlog(n)) time complexity
    sort(arr, arr + n);
    int p1 = 0, p2 = 1, min_sum = arr[p2] - arr[p1];
    for (int i = 1; i < n; i++)
    {
        if (arr[i + 1] - arr[i] < min_sum)
        {
            p1 = arr[i];
            p2 = arr[i + 1];
            min_sum = arr[i + 1] - arr[i];
        }
    }
    cout << arr[p1] << " " << arr[p2] << " " << min_sum;
    return 0;
}