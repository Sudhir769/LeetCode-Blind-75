#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>prev = intervals[0];
        int num=-1;

        for(auto a : intervals){
            if(a[0]<prev[1] && a[1]<=prev[1]){
                num++;
                prev=a;
            }else if(a[0]<prev[1] && a[1]>prev[1]){
                num++;
            }else{
                prev = a;
            }
        }
        return num;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
