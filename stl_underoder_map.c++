#include <bits/stdc++.h>
using namespace std;
int main(){
    //Based on Hashing architecture
    //we can only take valid key and value pair as its based on hashing (eg:- int , char , long long int , double)
    unordered_map< int, string> M; // Time complexity of any operation is O(1)
    M[1] = "A";
    M.insert({2, "B"}); 
    M[3] = "C";
    M[5] = "D";
    M[4] = "E"; // for insertition T.C = O(log(n))
    M[3] ="F";
    // displays the element in random order 
    for(auto pr : M){
        cout<< pr.first<<" "<<pr.second<<endl; 
    }
    return 0;
}