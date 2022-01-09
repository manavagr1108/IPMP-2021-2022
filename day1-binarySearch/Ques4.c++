// Given a sorted array and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume than the array is sorted in non-decreasing order. Write efficient functions to find floor and ceiling of x.
#include <bits/stdc++.h>
using namespace std;
int floor_ceiling(int array[], int n, int x)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < array[low])
        {
            cout << "floor :"
                 << "does not exits" << endl;
            cout << "cieling :" << array[low] << endl;
            return 0;
        }
        if (x > array[high])
        {
            cout << "floor :" << array[high] << endl;
            cout << "cieling :"
                 << "does not exits" << endl;
            return 0;
        }

        if (array[mid] == x)
        {
            cout << "floor :" << array[mid] << endl;
            cout << "ceiling :" << array[mid] << endl;
            return 0;
        }
        if (array[mid] < x)
        {
            if (array[mid + 1] > x && mid != n - 1)
            {
                cout << "floor :" << array[mid] << endl;
                cout << "ceiling :" << array[mid+1] << endl;
                return 0;
            }
            else{
                low = mid + 1;
            }
        }
        if(array[mid]>x){
            if(array[mid-1]<x && mid != 0){
                cout << "floor :" << array[mid-1] << endl;
                cout << "ceiling :" << array[mid] << endl;
                return 0;
            }
            else{
                high = mid -1;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int val;
    cin >> val;
    floor_ceiling(array, n, val);

    return 0;
}