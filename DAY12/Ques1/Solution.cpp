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
    vector<int>st, st2;
    void in(TreeNode* root){
        if(root){
            in(root->left);
            if(root->left == NULL and root->right==NULL){
                st.push_back(root->val);
            }
            in(root->right);
        }
    }
    void in2(TreeNode* root){
        if(root){
            in2(root->left);
            if(root->left == NULL and root->right==NULL){
                st2.push_back(root->val);
            }
            in2(root->right);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        in(root1);
        in2(root2);

        return st==st2;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
