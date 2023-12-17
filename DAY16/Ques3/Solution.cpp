#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int vis[n][m];
        int cntfresh=0;
        queue<pair<pair<int, int>, int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i, j}, 0});
                    vis[i][j]=2;
                }else{
                    vis[i][j] = 0;
                }
                if(grid[i][j]==1) cntfresh++;
            }
        }
        int maxTime = 0;
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        int cnt=0;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int row = it.first.first;
            int col = it.first.second;
            int t = it.second;

            maxTime = max(maxTime, t);

            for(int ind = 0; ind < 4; ind++){
                int nrow = row + dx[ind];
                int ncol = col + dy[ind];

                if(nrow>=0 and nrow<n and ncol>=0 and ncol<m){
                    if(vis[nrow][ncol] !=2 and grid[nrow][ncol]==1){
                        q.push({{nrow, ncol}, t+1});
                        vis[nrow][ncol] = 2;
                        cnt++;
                    }
                }
            }
        }
        if(cnt!=cntfresh) return -1;
        return maxTime;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
