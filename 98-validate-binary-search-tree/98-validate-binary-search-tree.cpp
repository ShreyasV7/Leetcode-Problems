/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    bool helperFunction(TreeNode*root, long long int minimum, long long int maximum){
        if(root == NULL) return true ; 
        
        if(root->val >= maximum || root->val <= minimum) return false; 
        
        return helperFunction(root->left, minimum, root->val) && helperFunction(root->right,root->val,maximum);
    }
public:
    bool isValidBST(TreeNode* root) {
        
        return helperFunction(root, LONG_MIN, LONG_MAX)  ;  
    }

};