#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> dp;
    int solve(int n, vector<int> &cost){
        if(n<=1) return 0;
        
        if(dp[n] != -1) return dp[n];
        
        int one = solve(n-1, cost) + cost[n-1];
        int two = solve(n-2, cost) + cost[n-2];

        return dp[n] =  min(one, two);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.resize(n+1, -1);
        return solve(n, cost);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
