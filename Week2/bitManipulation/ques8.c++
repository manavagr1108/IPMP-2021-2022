// Add two numbers without using arithmetic operators
#include <bits/stdc++.h>
using namespace std;
int sum(int a , int b) {
    unsigned int sum ,carry;
    while (b != 0){
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a ;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}