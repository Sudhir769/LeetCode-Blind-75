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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL or root == p or root == q) return root;

        TreeNode* leftAns= lowestCommonAncestor(root->left, p,q);
        TreeNode* rightAns= lowestCommonAncestor(root->right, p,q);

        if(leftAns == NULL) return rightAns;
        else if(rightAns == NULL) return leftAns;
        else return root;

    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

