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
    vector<int>temp;
    int pairSum(ListNode* head) {
        ListNode *fast=head, *slow=head;

        while(fast){
            temp.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        int n = temp.size()-1;
        int maxi=0;
        while(slow){
            maxi = max(maxi, temp[n]+slow->val);
            slow=slow->next;
            n--;
        }
        return maxi;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

