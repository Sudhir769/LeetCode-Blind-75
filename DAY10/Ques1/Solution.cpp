#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode odd(0);
        ListNode even(0);

        ListNode *t1 = &odd, *t2 = &even;
        int index=1;
        while(head){
            if(index%2==1){
                t1->next = head;
                t1=t1->next;
            }else{
                t2->next=head;
                t2=t2->next;
            }
            index++;
            head=head->next;
        }
        t1->next = even.next;
        t2->next=NULL;
        return odd.next;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
