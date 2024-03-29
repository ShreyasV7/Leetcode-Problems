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
    map<int,vector<TreeNode*>>mp ; 

    vector<TreeNode*> helper(int n){
        
        if(n==1){
            TreeNode*root = new TreeNode(0)  ; 
            return mp[1] =  {root}; 
        }
        
        if(mp.find(n)!=mp.end()) return mp[n]  ; 
        
        
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
        
        return mp[n] = res;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        
        vector<TreeNode*>res ;
        return helper(n)  ;  
        
    }
};