#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0; i<=n; i++){
            ans[i] = __builtin_popcount(i);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
