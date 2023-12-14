#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int n;
    void dfs(int node, vector<int>&vis, vector<vector<int>>& isConnected){
        vis[node] = 1;
        for(int i=0; i<n; i++){
            if(!vis[i] and isConnected[node][i] == 1){
                dfs(i, vis, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i, vis, isConnected);
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

