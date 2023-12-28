#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>>dp;
    int solve(int n, vector<int>& prices, int fee, int buy){
        if(n == prices.size()) return 0;
        if(dp[n][buy] != -1)  return dp[n][buy];

        int profit = 0;
        if(buy){
            profit = max(-prices[n] - fee + solve(n+1, prices, fee, 0), solve(n+1, prices, fee, 1));
        }else{
            profit = max(prices[n] + solve(n+1, prices, fee, 1), solve(n+1, prices, fee, 0));
        }
        return dp[n][buy] = profit;
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        dp.resize(n+1, vector<int>(2, -1));
        return solve(0, prices, fee, 1);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

