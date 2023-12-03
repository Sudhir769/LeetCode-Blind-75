#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    bool solve(int i, vector<int> &nums, int j, int cnt){
        if(cnt>=3) return true;
        if(i>=n)return false;

        bool take = false;
        if((i>j) and nums[i] > nums[j]){
            take  = solve(i+1, nums, i, cnt+1);
        }
        bool notTake = solve(i+1, nums, i, cnt);
        return take | notTake;

    }
    bool increasingTriplet(vector<int>& nums) {
        n = nums.size();

        // return solve(0, nums, 0, 0);
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i=0;i<n;i++){
            int ele = nums[i];
            if(ele <= first){
                first = ele;
            }else if(ele<=second){
                second = ele;
            }else{
                return true;
            }
        }
        return false;
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
        auto ans = ob.increasingTriplet(v);
        cout<<ans<<endl;
    }
}
// Input
// 3
// 5
// 1 2 3 4 5
// 6
// 2 1 5 0 4 6
// 5
// 5 4 3 2 1  