#include <bits/stdc++.h>
using namespace std;
int main(){
    // based on trees architecture
    // It compares the values present in the tree to perform any operation
    map <int , string> M; // int is key pair and the string is the value pair
    M[1] = "A";
    M.insert({2, "B"}); 
    M[3] = "C";
    M[5] = "D";
    M[4] = "E"; // for insertition T.C = O(log(n))
    M[3] ="F";

    // Iterator , to iterate into the Map 
    //displays the output in the ordered fromat based of the key's value not on value's value
    map <int , string> ::iterator it;
    for(it = M.begin(); it != M.end(); ++it){
        cout<< it->second;
    }

    //auto method to iterate into the map
    for(auto pr : M){
        cout<< pr.first<<" "<<pr.second<<endl; 
    }

    //M.size()  returns the size of the map ( in this case 5)
    int size = M.size(); 
    cout<<size<<endl;

    //M.find()  Used to find the element of the map
    //Time complexity is O(log(n)) 
    auto it = M.find(3);
    
    //M.erase() used to erase the element(particular element) of the map
    //Time complexity is O(log(n))  
    M.erase(it);

    //M.clear() used to clear the complete map 
    M.clear();

    for(auto pr : M){
        cout<< pr.first<<" "<<pr.second<<endl; 
    }

    return 0;
}