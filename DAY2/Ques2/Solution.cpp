#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVovel(char a){
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return vowels.count(a);
    }
    string reverseVowels(string s) {
        int start=0, end=s.size()-1;
        while(start<end){
            char i = s[start];
            char j = s[end];

            if(isVovel(i) and isVovel(j)){
                s[start++] = j;
                s[end--] = i;
            }

            if(!isVovel(i)) start++;
            if(!isVovel(j)) end--; 
        }
        return s;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;

        Solution ob;
        string ans = ob.reverseVowels(s);
        cout<<ans<<endl;
    }
}
// Input
// 3
// leetcode
// helloworld
// sudhir