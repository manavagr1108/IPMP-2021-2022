// Given an array of positive integers. All numbers occur an even number of times except one number which occurs an odd number of times. Find the number in O(n) time & constant space
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> val;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        val[arr[i]]++;
    }

    for (auto p : val)
    {
        if (p.second % 2 != 0)
        {
            cout << p.first << endl;
        }
    }
    return 0;
}