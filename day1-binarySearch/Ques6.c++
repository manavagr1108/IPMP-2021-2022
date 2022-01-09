// Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]. Expected time complexity is O(Logn)
#include <bits/stdc++.h>
using namespace std;
int find_frequency(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key < arr[mid])
        {
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key == arr[mid])
        {
            if(key != arr[mid-1] && mid != 0){
                return mid;
            }
            else if(mid == 0){
                return 0;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
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
    int key,start;
    cin >> key;
    start =find_frequency(array, n, key);
    for (int i = 0;; i++)
    {
        if(start == -1){
            cout<<"Element not found";
            break;
        }
        if(array[start+i] != key) {
            cout<< i;
            break;
        }
    }
    
    return 0;
}