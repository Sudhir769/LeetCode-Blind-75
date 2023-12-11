#include <bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
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
    unordered_map<long int, int>mp;
    int solve(TreeNode* root, int targetSum, long int currSum){
        if(root==NULL) return 0;
        
        currSum += root->val;
        int ans = mp[currSum - targetSum];
        mp[currSum]++;

        ans += solve(root->left, targetSum, currSum);
        ans += solve(root->right, targetSum, currSum);

        mp[currSum]--;
        return ans;
    }
    int pathSum(TreeNode* root, int targetSum) {
        mp[0]=1;
        return solve(root, targetSum, 0);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
