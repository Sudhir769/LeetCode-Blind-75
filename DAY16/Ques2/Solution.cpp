#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAtBorder(int row, int col, int n, int m) {
        return row == 0 || row == n - 1 || col == 0 || col == m - 1;
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size();
        int m = maze[0].size();
        
        queue<pair<pair<int, int>, int>>q; //{{row, col}, steps}

        int rowStart = entrance[0];
        int colStart = entrance[1];
        q.push({{rowStart, colStart}, 0});

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        maze[rowStart][colStart] = '+';
        int cntSteps = 0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;

            q.pop();

            if(isAtBorder(row, col, n, m)==1 and make_pair(row, col) != make_pair(rowStart, colStart)){
                return steps;
            }

            for(int ind=0; ind<4; ind++){
                int nrow = row + delRow[ind];
                int ncol = col + delCol[ind];

                if(nrow>=0 and nrow<n and ncol>=0 and ncol<m){
                    if(maze[nrow][ncol] != '+'){
                        q.push({{nrow, ncol}, steps+1});
                        maze[nrow][ncol] = '+';
                    }
                }
            }
        }
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

