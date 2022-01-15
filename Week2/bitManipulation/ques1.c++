// Given a positive integer, write a function to find if it is a power of two or not.
#include <bits/stdc++.h>
using namespace std;
string check_power_of_two(int n)
{
    int r = n & (n - 1);
    if (r == 0)
        return "Yes";
    else
        return "No";
}
int main()
{
    int n;
    cin >> n;
    cout << check_power_of_two(n) << endl;
    return 0;
}