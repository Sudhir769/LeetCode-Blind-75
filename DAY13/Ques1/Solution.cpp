#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxi = 0;
    void solve2(TreeNode* root, bool left, int cnt){
        if(root==NULL) return;

        maxi = max(maxi, cnt);

        if(left){
            solve2(root->left, false, cnt+1);
            solve2(root->right, true, 1);
        }else{
            solve2(root->left, false, 1);
            solve2(root->right, true, cnt+1);
        }
    }

    void solve(TreeNode* root, int left, int right){
        if(root==NULL) return;

        maxi = max({maxi, left, right});

        solve(root->left, right+1, 0);
        solve(root->right, 0, left+1);
    }

    int longestZigZag(TreeNode* root) {
        solve2(root, true, 0);
        solve2(root, false, 0);
        return maxi;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
