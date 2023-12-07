#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        string ans="";
        int n = s.length();
        stack<char>st;

        for(int i=0;i<n;i++){
            
            if(s[i] == ']'){
                vector<char>q;
                while(!st.empty() and st.top()!='['){
                    q.push_back(st.top());
                    st.pop();
                }
                st.pop();
                string num;
                while(!st.empty() and st.top() >= '0' and st.top() <='9'){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                int number = stoi(num);
                reverse(q.begin(), q.end());
                while(number--){
                    for(auto &i:q){
                    st.push(i);
                    }
                }
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
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
        string ans = ob.decodeString(s);
        for(auto &i:ans){
            cout<<i;
        }cout<<endl;
    }
}

