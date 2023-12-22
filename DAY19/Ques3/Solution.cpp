#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    unordered_map<char,string>mp;
    vector<string> result;
    int n;
    void solve(int idx, string &digits, string &temp){
        if(idx == n){
            result.push_back(temp);
            return;
        }

        char ch = digits[idx];
        string str = mp[ch];

        for(auto i:str){
            temp.push_back(i);
            solve(idx+1, digits, temp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        n = digits.size();
        if(n==0) return result;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        string temp = "";

        solve(0, digits, temp);
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
