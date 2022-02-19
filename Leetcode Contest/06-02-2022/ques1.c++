#include <bits/stdc++.h>
using namespace std;

vector <int> * sortEvenOdd(vector <int> & nums){
     if(nums.size()==2){
        return &nums;
    }
    int counter = 2;

    while(counter < nums.size())
    {
        for (int i = 0  ; i < nums.size() - counter; i+=2)
        {
           if (nums[i]>nums[i+2]){
               int temp = nums[i];
               nums[i] = nums[i+2];
               nums[i+2] = temp;
           }
        }
        counter+=2;
    }
    counter = 1;
    while(counter < nums.size())
    {
        for (int i = 1  ; i < nums.size() - counter; i+=2)
        {
           if (nums[i] < nums[i+2]){
               int temp = nums[i];
               nums[i] = nums[i+2];
               nums[i+2] = temp;
           }
        }
        counter+=2;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return &nums;
}
// vector <int> * sortEvenOdd(vector <int> & nums){
//     int n = nums.size();
//     for (int i = 0; i < n; i+=2)
//     {
//         for (int j = i+2; j < n; j+=2)
//         {
//             if(nums[j] < nums[i]){
//                 swap(nums[j], nums[i]);
//             }   
//         }
//     }
//     for (int i = 1; i < n; i+=2)
//     {
//         for (int j = i+2; j < n; j+=2)
//         {
//             if(nums[j] > nums[i]){
//                 swap(nums[j], nums[i]);
//             }   
//         }
//     }
     
//     return &nums;
// }
int main(){
    vector<int> nums {36,45,32,31,15,41,9,46,36,6,15,16,33,26,27,31,44,34};
    // int n , t; 
    // cin >> n;
    // for(int i = 0; i < n; i++)
    // {
    //     cin>>t;
    //     nums.push_back(t);
    // }
    sortEvenOdd(nums);
    return 0;
}