#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>ans(n, 0);

        int maxi = *max_element(candies.begin(), candies.end());

        for(int i=0;i<n;i++){
            if(candies[i] + extraCandies >= maxi){
                ans[i] = 1;
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> candies(n);
        for(int i=0;i<n;i++){
            cin>>candies[i];
        }
        int extraCandies; cin>>extraCandies;
        Solution ob;
        auto ans = ob.kidsWithCandies(candies, extraCandies);
        
        for(auto i:ans){
            if(i) cout<<"true"<<" ";
            else cout<<"false"<<" ";
        }cout<<endl;

    }
}
// Input:
// 1
// 5
// 2 3 5 1 3
// 3