#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ans = 0;
    void bfs(int src, unordered_map<int, list<pair<int, bool>>> &adjList){
        queue<int> q;
        unordered_map<int, bool> visited;
        q.push(src);

        visited[src] = true;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbour : adjList[front]){
                int v = neighbour.first;
                bool check = neighbour.second;

                if(!visited[v]){
                    if(check == 1){
                        ans++;
                    }
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int, list<pair<int, bool>>> adjList;

        for(int i = 0; i < connections.size(); i++){
            int u = connections[i][0];
            int v = connections[i][1];

            adjList[u].push_back({v, 1}); //original edge
            adjList[v].push_back({u, 0}); //fake edge
        } 

        bfs(0, adjList);

        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
