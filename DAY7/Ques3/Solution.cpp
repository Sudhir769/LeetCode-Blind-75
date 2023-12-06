#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int>mp;

        for(auto i:arr){
            mp[i]++;
        }
        unordered_set<int>st;

        for(auto i:mp){
            if(st.count(i.second)==1){
                return false;
            }else{
                st.insert(i.second);
            }
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        Solution ob;
        int ans = ob.uniqueOccurrences(nums);
        cout<<ans<<endl;
    }
}