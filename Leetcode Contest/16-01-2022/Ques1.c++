// 5980. Divide a String Into Groups of Size k
#include <bits/stdc++.h>
using namespace std;
void printSubstring(string s, int k, char x)
{
    string st = "";
    st += '[';
    int i = 0, dummyLen = k * (s.length() / k);
    for (i = 0; i < dummyLen; i += k)
    {
        st += '\"';
        for (int j = 0; j < k; j++)
        {
            st += s[j+i];
        }
        if (dummyLen == s.length() && i + k != dummyLen)
        {
            st += ',';
            continue;
        }
        else if (dummyLen == s.length() && i + k == dummyLen)
        {
            st += '\"';
            return;
        }
        else
           st += "\",";
    }
    st += '\"';
    for (i; i < k + dummyLen; i++)
    {
        if (i < s.length())
        {
            st += s[i];
        }
        else
        {
            st += x;
        }
    }
    st += '\"';
    st += ']';
    cout<<st;
}
int main()
{
    string s;
    int k;
    char x;
    cin >> s >> k >> x;
    printSubstring(s, k, x);
    return 0;
}