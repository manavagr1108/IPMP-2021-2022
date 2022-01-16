// Shuffle a given array using Fisher–Yates shuffle Algorithm
#include <bits/stdc++.h>
using namespace std;
int random_shuffle(int *arr, int n)
{
    int temp;
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--)
    {
        int ran = (rand() % (i + 1));
        temp = arr[ran];
        arr[ran] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    random_shuffle(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}