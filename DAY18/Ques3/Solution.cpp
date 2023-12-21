#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();

        sort(potions.begin(), potions.end());

        vector<int>pairs(n);
        int j = 0;
        for(long long i: spells){
            long long start = 0, end = m-1, mid = start + (end - start)/2;
            int ans=-1;
            while(start <= end){
                mid = start + (end - start)/2;

                if(i*potions[mid] >= success){
                    ans = mid;
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }

            pairs[j++] = ans != -1 ? (m - ans):0;
        }

        
        return pairs;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
