#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int a = nums[0];
        for(int i=1; i<n; i++){
            a = a^nums[i];
        }
        return a;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

