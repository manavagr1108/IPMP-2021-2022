// Given a 2D array, print it in spiral form. See the following examples
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int i = 0, j2 = 0, j1 = 0, i1 = 0, i2 = 0, j = 0, temp = 0, temp1 = 0, temp2 = 0;
    while (i != n / 2 && j != n / 2 - 1)
    {
        if (temp % 2 == 0)
        {
            if (temp1 % 2 == 0)
            {
                cout << arr[i][j] << " ";
                j++;
                if (j == n - j1 - 1)
                {
                    temp1++;
                    temp++;
                    j1++;
                }
            }
            if (temp1 % 2 != 0)
            {
                cout << arr[i][j] << " ";
                j--;
                if (j == j2)
                {
                    temp1++;
                    temp++;
                    j2++;
                }
            }
        }
        else if (temp % 2 != 0)
        {
            if (temp2 % 2 == 0)
            {
                cout << arr[i][j] << " ";
                i++;
                if (i == n - i1 - 1)
                {
                    temp2++;
                    temp++;
                    i1++;
                }
            }
            if (temp2 % 2 != 0)
            {
                cout << arr[i][j] << " ";
                i--;
                if (i == i2)
                {
                    temp2++;
                    temp++;
                    i2++;
                }
            }
        }
    }
    return 0;
}