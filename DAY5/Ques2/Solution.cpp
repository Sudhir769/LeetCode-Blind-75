#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int curr = 0;
        for(int i=0;i<k;i++){
            curr += nums[i];
        }
        int maxi = curr;

        for(int i=k;i<n;i++){
            curr += (nums[i]-nums[i-k]);
            maxi = max(maxi, curr);
        }
        return (double)maxi/k;
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
        int k; cin>>k;
        Solution ob;
        auto ans = ob.findMaxAverage(nums, k);
        cout<<ans<<endl;
    }
}
// Input
// 2
// 6
// 1 12 -5 -6 50 3
// 4
// 1
// -1
// 1