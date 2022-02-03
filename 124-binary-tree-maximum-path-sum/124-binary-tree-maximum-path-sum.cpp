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
    int maximum = INT_MIN ; 
    int maximumSum(TreeNode*root){
        if(root == NULL)
            return 0  ; 
        int sum = 0 ;
        
        int left = max(maximumSum(root->left) , 0 )  ; 
        int right = max(maximumSum(root->right) , 0) ;  
        
        sum+=(root->val+left+right)  ; 
        maximum = max(sum , maximum)  ; 
        
        return root->val + max(left,right)  ; 
    }
public:
    int maxPathSum(TreeNode* root) {
         
        maximumSum(root)  ;
        return maximum ; 
    }
};