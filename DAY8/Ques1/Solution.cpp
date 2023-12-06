#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size(), m = word2.size();

        if(n!=m) return false;

        unordered_map<char, int> mp1, mp2;

        for(auto i:word1) mp1[i]++;
        for(auto i:word2) mp2[i]++;

        for(int i=0; i<n; i++){
            if(mp1.find(word2[i])==mp1.end()) return false;
            if(mp2.find(word1[i])==mp2.end()) return false;
        }

        vector<int>v, u;
        for(auto i:mp1) v.push_back(i.second);
        for(auto i:mp2) u.push_back(i.second);

        sort(v.begin(), v.end());
        sort(u.begin(), u.end());
        
        return v==u;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;

        Solution ob;
        auto ans = ob.closeStrings(s1, s2);
        cout<<ans<<endl;
    }
}
// Input
// 2
// abc bac
// a aa