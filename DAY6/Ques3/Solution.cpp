#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int curr=0;
        int ans = 0;

        for(int i=0; i<n; i++){
            curr = curr + gain[i];
            ans = max(ans, curr);
        }
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
        int ans = ob.largestAltitude(nums);
        cout<<ans<<endl;
    }
}
// Input
// 2
// 5
// -5 1 5 0 -7
// 7
// -4 -3 -2 -1 4 3 2 1