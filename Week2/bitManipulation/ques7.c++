// Write a program that unsets the rightmost set bit of an integer. 
#include <bits/stdc++.h>
using namespace std;
int turnoff(int n)
{
    int n1 = n, i;
    if (n == 0)
        return 0;
    else
    {
        for (i = 0;; i++)
        {
            if (n & 1)
            {
                break;
            }
            n >>= 1;
        }
        return (n1 - pow(2, i));
    }
}
int main()
{
    int n;
    cin >> n;
    cout << turnoff(n);
    return 0;
}