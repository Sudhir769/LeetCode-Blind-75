#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        int cnt=0;
        while(i<j){
            if(nums[i]+nums[j]==k){
                cnt++, i++, j--;
            }else if(nums[i]+nums[j] > k){
                j--;
            }else{
                i++;
            }
        }
        return cnt;
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
        auto ans = ob.maxOperations(nums, k);
        cout<<ans<<endl;
    }
}
// Input
// 2
// 4
// 1 2 3 4
// 5
// 5
// 3 1 3 4 3
// 6