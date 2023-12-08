#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> rad, dir;
        for(int i=0;i<n;i++){
            if(senate[i]=='R') rad.push(i);
            else dir.push(i);
        }
        while(!rad.empty() and !dir.empty()){
            if(rad.front() > dir.front()) dir.push(n++);
            else rad.push(n++);

            rad.pop();
            dir.pop();
        }
        if(rad.empty()){
            return "Dire";
        }
        return "Radiant";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
