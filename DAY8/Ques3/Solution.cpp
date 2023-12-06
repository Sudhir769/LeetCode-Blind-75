#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char>st;
        string ans = "";

        for(int i=0;i<n;i++){
            if(s[i] != '*'){
                st.push(s[i]);
            }else{
                if(!st.empty())st.pop();
            }
        }
        while(!st.empty()){
            ans += st.top(); 
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;

        Solution ob;
        string ans = ob.removeStars(s);
        
        for(auto i:ans){
            cout<<i;
        }cout<<endl;
    }
}
// Input
// 2
// leet**cod*e
// abcdef*****