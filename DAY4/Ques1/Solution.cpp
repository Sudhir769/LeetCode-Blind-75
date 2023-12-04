#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n=a.size();
        
        int i=0, j=0;
        while(j<n){
            if(a[j] != 0){
                swap(a[i],a[j]);
                i++; 
            }
            j++;
        }
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        Solution ob;
        ob.moveZeroes(nums);

        for(auto it: nums){
            cout<<it<<" ";
        }cout<<endl;

    }
}
// Input
// 2
// 5
// 0 1 0 3 5
// 2
// 2 1