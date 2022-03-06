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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        map<int,TreeNode*>parents; 
        map<int,bool>child ; 
        
        
        for(auto &itr : descriptions){
            
            if(parents.find(itr[0])==parents.end()){
                
                TreeNode*par = new TreeNode(itr[0])  ; 
                parents[itr[0]] = par ; 
            }
            
            if(parents.find(itr[1]) == parents.end()){
                TreeNode*child = new TreeNode(itr[1])  ; 
                parents[itr[1]] = child ; 
            }
            
            if(itr[2] == 1){
                parents[itr[0]]->left = parents[itr[1]]  ;  
            }
            else{
                parents[itr[0]]->right = parents[itr[1]]  ;  
            }
            
            child[itr[1]] =1 ; 
        }
        
        for(auto &it : descriptions){
           if(child[it[0]]==0){
               TreeNode*root =parents[it[0]] ; 
               return root;  
           }
        }
        
        return NULL;  
    }
};