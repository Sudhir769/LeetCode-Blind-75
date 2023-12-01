#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string temp="", ans="";
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                if(temp.size() != 0){
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans+=" ";
                temp="";
                }
            }else{
                temp+=s[i];
            }
            
        }
        if(temp.size()!=0){
            reverse(temp.begin(), temp.end());
            ans+=temp;
        }else if(ans.size()!=0) ans.pop_back();
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string s;
        getline(cin, s);

        Solution ob;
        string ans = ob.reverseWords(s);

        cout<<ans<<endl;
    }
}