// Bit Rotation: A rotation (or circular shift) is an operation similar to shift except that the bits that fall off at one end are put back to the other end.
// In left rotation, the bits that fall off at left end are put back at right end.
// In right rotation, the bits that fall off at right end are put back at left end.

#include <bits/stdc++.h>
using namespace std;
int updateBit(int n, int val, int pos)
{
    int mask = ~(val << pos);
    n = n | mask;
    return n;
}
int leftRoation(int n, int rotate)
{
    int n1 = n;
    n = n << rotate;
    // for (int i = 0; i < rotate; i++)
    // {
    //     int val = (n1 & (1 << i));
    //     n = updateBit(n, val, i);
    // }
    return n;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << leftRoation(n, r) << endl;
    return 0;
}