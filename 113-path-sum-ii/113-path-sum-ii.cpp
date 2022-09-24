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
public:
    void dfs(TreeNode*root,int targetSum,vector<vector<int>>&paths,vector<int>&currPath){
       if(root==NULL) return ; 
        currPath.push_back(root->val)  ; 
        targetSum-=root->val  ; 
        
        if(root->left==NULL && root->right==NULL && targetSum==0){
            paths.push_back(currPath)  ;  
        }
        
        if(root->left) 
            dfs(root->left,targetSum,paths,currPath)  ; 
        
        if(root->right) 
            dfs(root->right,targetSum,paths,currPath)  ; 
        
        currPath.pop_back() ;  
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>paths;  
        vector<int>currPath;  
        dfs(root,targetSum,paths,currPath) ;
        return paths; 
    }
};