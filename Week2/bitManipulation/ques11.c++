// Find position of the only set bit
#include <bits/stdc++.h>
using namespace std;
int pos_setBit(int n)
{
    int pos = 1;
    while (n > 0)
    {
        if (n & 1)
            return pos;
        n >>= 1;
        pos++;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    cout << pos_setBit(n) << endl;
    return 0;
}