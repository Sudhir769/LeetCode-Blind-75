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
    int maxLevelSum(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int ans=0, maxi=INT_MIN, level=1;

        while(!q.empty()){
            int n = q.size();
            int sum = 0;
            while(n--){
                auto node = q.front().first;
                level = q.front().second;
                q.pop();

                sum += node->val;

                if(node->left != NULL) q.push({node->left, level+1});
                if(node->right != NULL) q.push({node->right, level+1});
            }
            if(sum > maxi){
                maxi = sum;
                ans = level;
            }
            level++;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
