#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans="";

        if(str1+str2==str2+str1){
            ans = str1.substr(0, __gcd(str1.size(), str2.size()));
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string str1, str2;
        cin>>str1>>str2;

        Solution ob;
        string ans = ob.gcdOfStrings(str1, str2);
        
        for(auto i:ans){
            cout<<i;
        }cout<<endl;

    }
}

// Input:
// 1
// ABABAB
// ABAB