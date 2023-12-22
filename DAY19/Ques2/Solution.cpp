#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int calculate(int n, vector<int>& piles, int mid){
        int cal=0;

        for(int i=0; i<n; i++){
            cal += ceil((double)piles[i]/(double)mid);
        }
        return cal;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while(low <= high){
            int mid = high + (low-high)/2;

            if(calculate(n, piles, mid) <=h){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

