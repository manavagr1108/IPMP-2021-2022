#include <bits/stdc++.h>
using namespace std;
int selection(int arr[],int n)
{
    int temp,index ;
    for (int i = 0; i < n; i++)
    {
        index = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] <= arr[j-1])
            {
                index=j;
            }
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;        
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"given non sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    selection(arr,n);
    cout<<"the sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}