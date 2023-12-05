#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int i=0, j=0, mid=-1, ans=0;
        while(j<n){
            if(nums[j]==0){
                ans = max(ans, j-i-1);
                i = mid + 1;
                mid = j;
            }
            j++;
        }
        ans = max(ans, j-i-1);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        Solution ob;
        int ans = ob.longestSubarray(nums);
        cout<<ans<<endl;
    }
}
// input
// 2
// 4
// 1 1 0 1
// 9
// 0 1 1 1 0 1 1 0 1