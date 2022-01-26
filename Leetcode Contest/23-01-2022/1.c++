#include <bits/stdc++.h>
using namespace std;
int countElements(vector<int> &nums)
{
    vector<int>::iterator it = nums.begin();
    int ans = 0, temp = 0 , n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (ans == 0)
        {
            if (it[i] > it[i + 1])
            {
                temp = 1;
            }
            if (it[i] != it[i + 1])
            {
                ans++;
            }
            continue;
        }
        if (i == n - 1)
        {
            if (temp == 1 && it[i] < it[i - 1])
            {
                ans++;
            }
            else if (temp == 0 && it[i] > it[i - 1])
            {
                ans++;
            }
            continue;
        }
        if (temp == 1)
        {
            if (it[i] > it[i + 1] && it[i - 1] > it[i])
            {
                ans++;
            }
        }
        else if (temp == 0)
        {
            if (it[i] < it[i + 1] && it[i] > it[i - 1])
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return ans;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    countElements(v);
    return 0;
}