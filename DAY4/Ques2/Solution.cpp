#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int issub(string s, string t, int n, int m){
        
        if(n<=0 || m<=0){
            return 0;
        }

        if(s[n-1]==t[m-1]){
            return 1+issub(s,t,n-1,m-1);
        }
        return issub(s,t,n,m-1);
    }
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();

        if(issub(s, t, n, m)==n){
            return true;   
        }
        return false;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;

        Solution ob;
        bool ans = ob.isSubsequence(s, t);

        cout<<ans<<endl;

    }
}
// Input
// 2
// abc ahbdgc
// axc ahcgdg