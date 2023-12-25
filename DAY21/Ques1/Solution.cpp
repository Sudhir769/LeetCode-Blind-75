#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int>dp;
    int solve(int n, vector<int>&nums){
        if(n<0)  return 0;

        if(dp[n] != -1) return dp[n];

        int notTake = solve(n-1, nums);
        int take = nums[n] + solve(n-2, nums);

        return dp[n] = max(take, notTake);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n+1, -1);
        return solve(n-1, nums);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
