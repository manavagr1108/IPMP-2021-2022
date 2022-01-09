// Given a number, find the next smallest palindrome
#include <bits/stdc++.h>
using namespace std;
void noIsNine(int len)
{
    int val = 1;
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            val = val * 10 + 1;
        }
        else
        {
            val = val * 10;
        }
    }
    cout << val << endl;
}
int checkPalin(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
            return 0;
    }
    return 1;
}
int convertArrToVal(int *arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans * 10 + arr[i];
    }
    return ans;
}
int checkPalinForInt(int num)
{
    int n, k, rev = 0;
    n = num;
    while (num != 0)
    {
        k = num % 10;
        rev = (rev * 10) + k;
        num = num / 10;
    }
    if (n == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string n;
    cin >> n;
    int n1 = 0;
    int arr[n.length()];
    for (int i = 0; i < n.length(); i++)
    {
        arr[i] = n[i] - '0';
    }
    int num = convertArrToVal(arr, n.length());
    for (int i = 0; i < n.length(); i++)
    {
        if (arr[i] != 9)
        {
            n1 = 1;
            break;
        }
    }
    if (n1 != 1)
    {
        noIsNine(n.length());
        return 0;
    }
    else
    {
        if (checkPalin(arr, n.length()) == 1)
        {
            if (n.length() % 2 != 0)
            {
                if (arr[n.length() / 2] != 9)
                {
                    arr[n.length() / 2] += 1;
                    num = convertArrToVal(arr, n.length());
                    cout << num;
                    return 0;
                }
                else
                {
                    num++;
                    while (!checkPalinForInt(num))
                        num += 1;
                    cout << num;
                    return 0;
                }
            }
            else
            {
                if (arr[n.length() / 2] != 9)
                {
                    arr[n.length() / 2] += 1;
                    arr[n.length() / 2 - 1] += 1;
                    num = convertArrToVal(arr, n.length());
                    cout << num;
                    return 0;
                }
                else
                {
                    num++;
                    while (!checkPalinForInt(num))
                        num += 1;
                    cout << num;
                    return 0;
                }
            }
        }
        else
        {
            while (!checkPalinForInt(num))
                num += 1;
            cout << num;
            return 0;
        }
    }
    return 0;
}