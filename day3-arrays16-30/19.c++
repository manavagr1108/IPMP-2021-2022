// Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order. The designed algorithm should have linear time complexity.
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
    int num;
    cin >> num;
    int i = 0, j = n - 1;
    while (i < n)
    {
        if (arr[i][j] == num)
        {
            cout << i << " " << j << endl;
            return 0;
        }
        if (arr[i][j] > num)
            j--;
        else if (arr[i][j] < num)
            i++;
    }

    return 0;
}