// Compute the integer absolute value (abs) without branching
#include <bits/stdc++.h>
using namespace std;
int abs_no(int n)
{
    int val;
    n = ~n;
    n++;
    return n;
}
int main()
{
    int n;
    cin >> n;
    if (n > 0)
        cout << n;
    else
    {
        cout << abs_no(n) << endl;
    }
    return 0;
}