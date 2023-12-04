#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVovel(char ch){
        set<char>st = {'a', 'e', 'i', 'o', 'u'};
        return st.count(ch);
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int cnt=0;

        for(int i=0;i<k;i++){
            cnt+=isVovel(s[i]);
        }
        int ans = cnt;

        for(int i=k;i<n;i++){
            cnt += (isVovel(s[i]) - isVovel(s[i-k]));
            ans = max(ans, cnt);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int k; cin>>k;

        Solution ob;
        int ans = ob.maxVowels(s, k);
        cout<<ans<<endl;
    }
}
// Input
// 2
// abciiidef
// 3
// aeiou
// 2