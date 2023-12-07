#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        vector<int>st;

        for(auto &i:a){

            while(!st.empty() and i<0 and st.back() > 0){
                int sum = i + st.back();

                if(sum<0){
                    st.pop_back();
                }else if(sum>0){
                    i=0;
                }else{
                    st.pop_back();
                    i=0;
                }
            }
            if(i!=0){
                st.push_back(i);
            }
        }
        return st;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        auto ans = ob.asteroidCollision(a);

        for(auto &i:ans){
            cout<<i<<" ";
        }cout<<endl;
    }
}
