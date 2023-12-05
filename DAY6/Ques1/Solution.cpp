#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int ans = 0;

        while(j<n){
            if(nums[j]==0) k--;

            if(k<0){
                if(nums[i]==0){
                    k++;
                }
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>nums(n);
        int k; cin>>k;

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        Solution ob;
        auto ans = ob.longestOnes(nums, k);

        cout<<ans<<endl;
    }
}