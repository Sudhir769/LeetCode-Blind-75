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
    vector<int>ans;
    void solve(TreeNode* root, int level){
        if(root==NULL) return;
        if(ans.size()==level) ans.push_back(root->val);

        solve(root->right, level+1);
        solve(root->left, level+1);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        // solve(root, 0);

        
        if(root==NULL)  return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                root = q.front();
                q.pop();

                if(root->left != NULL) q.push(root->left);
                if(root->right != NULL) q.push(root->right);
            }
            ans.push_back(root->val);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
