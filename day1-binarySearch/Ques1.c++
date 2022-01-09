// Given a sorted array of N distinct elements. Find a key in the array using least number of comparisons. 

#include <bits/stdc++.h>
using namespace std;
int binary_search(int array[],int low,int high, int key){
    int mid;
    while(low<=high){
        mid = (low+ high)/2;
        if(key<array[mid]){
            high = mid-1;
        }
        else if(key>array[mid]){
            low = mid +1;
        }
        else if(key==array[mid]){
            return mid;
        }
    }
    return 0;
}
int main(){
    int N;
    cin>>N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;

    if(binary_search(array,0,N-1,key) !=0)
    cout<< key << " is present in the sorted array";
    else
    cout<<key  << " is not present in the sorted array";
    
    return 0;
}