// Given two numbers ‘a’ and b’. Write a program to count number of bits needed to be flipped to convert ‘a’ to ‘b’
#include <bits/stdc++.h>
using namespace std;
int no_bits_flipped(int a)
{
    int count = 0;
    while (a > 0) // Brian Kernighan’s Algorithm to count no of 1 s in a number
    {
        count++;
        a &= a - 1;
    }
    return count;
}
int main()
{
    int a, b, ans;
    cin >> a >> b;
    ans = a ^ b;
    cout << no_bits_flipped(ans);
    return 0;
}