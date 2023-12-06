#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);

        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        for(auto i:st1){
            if(st2.count(i)==0) ans[0].push_back(i);
        }
        for(auto i:st2){
            if(st1.count(i)==0) ans[1].push_back(i);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}