#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

long long smallestNumber(long long nums)
{
    if (nums == 0)
        return 0;
    vector<int> v;
    long long n = nums;
    while (n>0)
    {
        int rem = n%10;
        v.push_back(rem);
        n/=10;
    }
    if(nums>0){
        sort(v.begin(), v.end());
        int j = 0;
        for(j = 0; j<v.size();j++){
            if(v[j]>0){
                swap(&v[j], &v[0]);
                break;
            }
        }
        n=0;
        for (int i = 0; i < v.size(); i++)
        {
            n = n*10;
            n+= v[i];
        }
        return n;
        
    } else{
        sort(v.begin(), v.end());
        // int j;
        // for(j = v.size(); j>0;j--){
        //     if(v[j]>0){
        //         swap(&v[j], &v[v.size()]);
        //         break;
        //     }
        // }
        n=0;
        for (int i = v.size()-1; i >= 0; i--)
        {
            n = n*10 + v[i];
        }
        return n;
    }
}
int main(){
    long long int n;
    cin >> n;
    cout << smallestNumber(n);
    return 0;
}