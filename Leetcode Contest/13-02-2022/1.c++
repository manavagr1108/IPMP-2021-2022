#include <bits/stdc++.h>
using namespace std;
int countOperations(int num1, int num2) {
    static int count = 0;
    if(num1 == 0 || num2 == 0){
        return count;
    }
    if(num1 >= num2){
        count++;
        return countOperations(num2,num1-num2);
    }
    else{
        count++;
        return countOperations(num1,num2-num1);
    }
    }
int main(){
    int n1 , n2;
    cin >> n1 >> n2;
    cout<<countOperations(n1, n2);
    return 0;
}