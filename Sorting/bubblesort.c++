#include <bits/stdc++.h>
using namespace std;
int bubble(int arr[],int n)
{
    int check,temp;
    for (int i = 0; i < n; i++)
    {
        check=0;
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                check=1;
            }
        }
        if(check==0)//to check if the array is alreay sorted or not
        break;
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
    bubble(arr,n);
    cout<<"the sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}