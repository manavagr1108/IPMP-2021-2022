#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high, temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int low, int high)
{

    //base condition
    if (low > high)
    {
        return;
    }
    else
    {
        int partitionIndex = partition(arr, low, high); // index of pivot after partition
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int n;
    cout<<"enter the array length"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the unsorted array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout<<"the sorted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}
