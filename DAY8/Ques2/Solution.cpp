#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();

        map<vector<int>, int> freq;
        int count = 0;

        for(auto i:grid){
            freq[i]++;
        }

        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            count += freq[temp];
        }
        return count;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>>grid(n, vector<int>(n,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
            }
        }
        Solution ob;

        int ans = ob.equalPairs(grid);\
        cout<<ans<<endl;
    }
}
//Input
// 2
// 3
// 3 2 1
// 1 7 6
// 2 7 7
// 4
// 3 1 2 2
// 1 4 4 5
// 2 4 2 2
// 2 4 2 2 
