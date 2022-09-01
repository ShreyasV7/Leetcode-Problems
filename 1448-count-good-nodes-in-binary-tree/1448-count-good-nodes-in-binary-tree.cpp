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
  
    int sum = 0 ;
  
    void dfs(TreeNode*root , int currMaximum){
      
      if(root==NULL) return  ;  
      
      if(currMaximum <= root->val)
        sum+=1 ; 
      
       dfs(root->left , max(currMaximum , root->val) )  ; 
       dfs(root->right , max(currMaximum , root->val) )  ; 
      
      
    }
    int goodNodes(TreeNode* root) {
        
      if(root == NULL ) return 0 ; 
      
      dfs(root , INT_MIN)  ;  
      
      return sum ; 
    }
  
  
};