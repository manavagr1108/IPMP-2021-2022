// Position of rightmost set bit
#include <bits/stdc++.h>
using namespace std;
int rightmost_set_pos(int n)
{
    int pos = 0;
    while (n != 0)
    {
        if (n & 1)
            return pos;
        pos++;
        n >>= 1;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << rightmost_set_pos(n);
    return 0;
}