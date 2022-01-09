// You are given an unsorted array with both positive and negative elements. You have to find the smallest positive number missing from the array in O(n) time using constant extra space. You can modify the original array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,j=0;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp>0){
            m[j] = temp;
            j++;
        }
    } 
    for (int i = 0; i < j; i++)
    {
        if(m[i]>0 && m[(m[i])-1] < j) m[(m[i])-1] = -m[(m[i])-1];
        if(m[i]<0 && m[(-m[i])-1] < j) m[(-m[i])-1] = -m[(-m[i])-1];
    }
    for (int i = 0; i < j; i++)
    {
        cout << m[i] << endl;
    }
    
    for (int i = 0; i < j; i++)
    {
        if(m[i] > 0 ) {
            cout<<m[i] - 1;
            return 0;
        }
    }
    cout<<j-1;
    return 0;
}