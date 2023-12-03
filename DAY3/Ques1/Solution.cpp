#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n, 1), left(n, 1), right(n, 1);

        for(int i=1; i<n; i++){
            left[i] = left[i-1]*nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            right[i] = right[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i] = left[i]*right[i];
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        Solution ob;
        vector<int> ans = ob.productExceptSelf(v);
        for(auto i: ans){
            cout<<i<<" ";
        }cout<<endl;
    }
}
// Input
// 2
// 5
// -1 1 0 3 -3
// 4
// 1 2 3 4 