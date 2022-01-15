// swwap all even and odd bits
#include <bits/stdc++.h>
using namespace std;
int updateBit(int n, int val, int pos)
{
    int mask = n & ~(1 << pos);
    n = mask | (val << pos);
    return n;
}
int getBit(int n, int pos)
{
    int temp = n & (1<<pos);
    if(temp == 0) return temp;
    else return 1;
}
int swap_bits(int n)
{
    int NoOfBits = sizeof(n) * 8;
    for (int i = 0; i < NoOfBits; ++i + ++i)
    {
        int temp1 = getBit(n, i);
        int temp2 = getBit(n, i + 1);
        n = updateBit(n, temp2, i);
        n = updateBit(n, temp1, i + 1);
    }
    return n;
}
int main()
{
    int n;
    cin >> n;
    cout << swap_bits(n);
    // cout << getBit(n, 1);
    // n= updateBit(n,1,1);
    // cout<<n;
    return 0;
}