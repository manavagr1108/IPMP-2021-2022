// Given a number, find the next higher number which has the exact same set of digits as the original number
#include <bits/stdc++.h>
using namespace std;
int checkForAllSameVal(int n)
{
    int t, r;
    for (int i = 0; n != 0; i++)
    {
        if (i == 0)
        {
            r = n % 10;
            t = r;
            n = n / 10;
        }
        else
        {
            r = n % 10;
            if (r == t)
                continue;
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n, rev1, rev2;
    cin >> n;
    if (checkForAllSameVal(n))
    {
        cout << "There's no greater number than the given no with the same set of digits";
        return 0;
    }
    else
    {
        rev1 = n % 100;
        rev2 = (rev1 / 10)*10;
        rev2 =  rev1 - rev2;
        rev1 = rev1 / 10;
        n = n / 100;
        n=n*100;
        n += rev2 * 10 + rev1;
        cout<<n;
    }
    return 0;
}