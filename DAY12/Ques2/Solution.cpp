#include <bits/stdc++.h>
using namespace std;

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
    int solve(TreeNode* root, int max){
        if(root==NULL) return 0;

        if(root->val >= max){
            max=root->val;
        }

        int left = solve(root->left, max);
        int right = solve(root->right, max);

        return left + right + (root->val >= max);
    }
    int goodNodes(TreeNode* root) {
        return solve(root, root->val);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

