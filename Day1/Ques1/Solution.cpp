#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size();
        int m = word2.size();
        int i=0, j=0;

        while(i<n and j<m){
            ans+=word1[i++];
            ans+=word2[j++];
        }
        while(i<n) ans+=word1[i++]; 
        while(j<m) ans+=word2[j++];

        return ans; 
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string word1, word2;
        cin>>word1>>word2;

        Solution ob;
        string ans = ob.mergeAlternately(word1, word2);
        
        for(auto i:ans){
            cout<<i;
        }cout<<endl;
    }
}
// Input:
// 1
// Hello
// World