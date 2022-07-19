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
    vector<TreeNode*> helper(int n){
        
        if(n % 2 == 0 ){
            return {} ;  
        }
        if(n==1){
            TreeNode*root = new TreeNode(0)  ; 
            return {root}; 
        }
        
        vector<TreeNode*>res;  
        for(int i=2;i<n;i++){
            vector<TreeNode*>leftSubtree = helper(i-1) ;  
            vector<TreeNode*>rightSubtree = helper(n-i)  ; 
            
            for(auto left : leftSubtree){
                for(auto right : rightSubtree){
                    TreeNode*root = new TreeNode(0)  ; 
                    root->left = left;  
                    root->right = right;
                    res.push_back(root)  ; 
                }
            }
        }
        
        return res;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        
        vector<TreeNode*>res ;
        return helper(n)  ;  
        
    }
};