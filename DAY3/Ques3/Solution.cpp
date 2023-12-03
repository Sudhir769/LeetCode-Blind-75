#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string s = "";
        chars.push_back('*');
        int cnt=1;

        for(int i=0;i<n;i++){
            char c = chars[i];

            if(chars[i+1]==c){
                cnt++;
            }else{
                s+=c;
                if(cnt>1){
                    s+=to_string(cnt);
                    cnt=1;
                }
            }
        }

        int size = s.length();
        for(int i=0;i<size;i++){
            chars[i] = s[i];
        }
        return size;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<char>chars(n);
        for(int i=0;i<n;i++){
            cin>>chars[i];
        }
        Solution ob;
        int ans = ob.compress(chars);

        for(int i=0;i<ans;i++){
            cout<<chars[i]<<"";
        }cout<<endl;
    }
}
// Input
// 2
// 7
// a a b b c c c
// 13
// a b b b b b b b b b b b b