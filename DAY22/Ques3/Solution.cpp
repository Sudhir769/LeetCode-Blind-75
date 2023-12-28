#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i, int j, string& s1, string& s2){
        if(i<0) return j+1;
        if(j<0) return i+1;

        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j] = solve(i-1, j-1, s1, s2);
        }
        return dp[i][j] = min({1+solve(i, j-1, s1, s2), 1+solve(i-1, j, s1, s2), 1+ solve(i-1, j-1, s1, s2)});
        return dp[i][j] = false;
    }

    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        dp.resize(n+1, vector<int>(m+1, -1));
        return solve(n-1, m-1, word1, word2);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
