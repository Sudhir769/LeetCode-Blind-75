#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>>ans;
    void solve(int ind, int k, int sum, vector<int>&sumVector, int n){
        if(sum==n and k==0){
            ans.push_back(sumVector);
            return;
        }
        if(sum > n) return;

        for(int i=ind; i<=9; i++){
            if(i>n) break;
            sumVector.push_back(i);
            solve(i+1, k-1, sum+i, sumVector, n);
            sumVector.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int sum=0;
        vector<int>sumVector;
        solve(1, k, sum, sumVector, n);
        return ans;    
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
