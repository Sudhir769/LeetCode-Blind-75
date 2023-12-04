#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int start, int end, int &maxWater, vector<int>& heights){
        if(start > end) return;

        int base = end - start;
        int height = min(heights[start], heights[end]);
        int area = base * height;
        maxWater = max(maxWater, area);

        if(heights[start] < heights[end]){
            solve(start+1, end, maxWater, heights);
        }else{
            solve(start, end-1, maxWater, heights);
        }
    }
    int maxArea(vector<int>& heights) {
        int ans = 0;
        
        solve(0, heights.size()-1, ans, heights);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        Solution ob;
        int ans = ob.maxArea(v);
        cout<<ans<<endl;
    }
}