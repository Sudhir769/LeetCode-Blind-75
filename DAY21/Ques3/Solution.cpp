#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>>dp;
    int solve(int m, int n){
        if(n<0 or m<0) return 0;

        if(m==0 and n==0) return 1;

        if(dp[m][n] != -1) return dp[m][n];

        int left = solve(m-1, n);
        int up = solve(m, n-1);

        return dp[m][n] = left + up;
    }

    int uniquePaths(int m, int n) {
        dp.resize(m, vector<int>(n, -1));

        return solve(m-1, n-1);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
