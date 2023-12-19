#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(), nums.end());

        for(int i=1; i<k; i++){
            pq.pop();
        }
        return pq.top();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
