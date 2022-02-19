#include <bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int> &nums)
{
    int no_ofOpernations = 0;
    int req1 = nums[0], req2 = nums[1], len1 = 0 , len2 = 0, maxlen1 = 0, maxlen2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int temp1 = nums[i];
        int temp2 = nums[i + 1];
        if(temp1 == temp2){
            continue;
        }
        int j = i + 2;
        len1 = 0;
        len2 = 0;
        while (j<nums.size())
        {
            if (temp1 == nums[j])
            {
                len1++;
            }
            if (temp2 == nums[j + 1] && j + 1 < nums.size())
            {
                len2++;
            }
            j += 2;
        }
        if (len1 > maxlen1)
        {
            maxlen1 = len1;
            req1 = temp1;
        }
        if(len2> maxlen2){
            maxlen2 = len2;
            req2 = temp2;
        }
    }
    for (int i = 0; i < nums.size(); i+=2)
    {
        if (nums[i] != req1)
        {
            nums[i] = req1;
            no_ofOpernations++;
        }
        if (nums[i + 1] != req2 && i + 1 < nums.size())
        {
            nums[i + 1] = req2;
            no_ofOpernations++;
        }
    }
    return no_ofOpernations;
}
int main()
{
    // vector<int> v = {3,1,3,2,4,3};
    // vector<int> v = {68,68,24,100,85,7,96,64,91,95,75,59,4,67,63,70,97,84,94,46,95,72,73,83,33,34,9,91,17,8,22,41,11,25,57,70,33,7,71,20,55,45,78,92,6,56,37,95,20,8,82,60,45,49,9,27,46,85,87,83,77,34,92,28,25,18,62,51,79,55,71,33,21,29,92,43,51};
    vector<int> v = {69, 91, 47, 74, 75, 94, 22, 100, 43, 50, 82, 47, 40, 51, 90, 27, 98, 85, 47, 14, 55, 82, 52, 9, 65, 90, 86, 45, 52, 52, 95, 40, 85, 3, 46, 77, 16, 59, 32, 22, 41, 87, 89, 78, 59, 78, 34, 26, 71, 9, 82, 68, 80, 74, 100, 6, 10, 53, 84, 80, 7, 87, 3, 82, 26, 26, 14, 37, 26, 58, 96, 73, 41, 2, 79, 43, 56, 74, 30, 71, 6, 100, 72, 93, 83, 40, 28, 79, 24};
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int val;
    //     cin >> val;
    //     v.push_back(val);
    // }
    cout << minimumOperations(v);
    return 0;
}