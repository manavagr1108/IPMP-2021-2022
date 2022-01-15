// Write an efficient program to count the number of 1s in the binary representation of an integer.
#include <bits/stdc++.h>
using namespace std;
int no_of_1_in_br(int n)
{
    int ans = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << no_of_1_in_br(n) << endl;
    return 0;
}