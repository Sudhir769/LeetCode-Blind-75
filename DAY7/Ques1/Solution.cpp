#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(), 0);

        int sum1=0;
        for(int i=0; i<n;i++){
            sum -= nums[i];
            if(sum==sum1) return i;
            sum1 += nums[i];
        }
        return -1;
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
        int ans = ob.pivotIndex(nums);
        cout<<ans<<endl;
    }
}
// Input
// 2
// 6
// 1 7 3 6 5 6
// 3
// 2 -1 1