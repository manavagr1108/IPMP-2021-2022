// How to swap the nibble bit positions of a number?
#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int i)
{
    return (n & (1 << i)) != 0;
}
int updateBit(int n, int val, int pos)
{
    int mask = n & ~(1 << pos);
    n = mask | (val << pos);
    return n;
}
int swapNibble(int n)
{
    int temp1, temp2, len;
    for (int i = 0; i < sizeof(n) * 8; i++)
    {
        len = 1 << i;
        if (n < len)
        {
            len = i - 1;
            break;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        temp1 = getBit(n, i);
        temp2 = getBit(n, len - i);
        n = updateBit(n, temp2, i);
        n = updateBit(n, temp1, len - i);
    }
    return n;
}
int main()
{
    int n;
    cin >> n;
    cout << swapNibble(n) << endl;
    return 0;
}