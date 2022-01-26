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
    void inorder(TreeNode*r , vector<int>&v){
        if(r==NULL) return  ; 
        
        inorder(r->left,v)  ; 
        v.push_back(r->val)  ; 
        inorder(r->right,v)  ;
        
    }
    
    void mergeTree(vector<int>&tree1,vector<int>&tree2,vector<int>&ans){
        
        int i=0,j=0,k=0; 
        
        while(i<tree1.size() && j<tree2.size()){
            
            if(tree1[i] < tree2[j]){
                ans[k] = tree1[i]  ; 
                k++ ; i++ ; 
            }
            else{
                ans[k] = tree2[j] ; 
                k++ ; j++ ;
            }
        }
        
        while(i<tree1.size()){
            ans[k] = tree1[i] ; 
            k++ ; i++ ; 
        }
        
        while(j<tree2.size()){
            ans[k] = tree2[j]  ; 
            k++ ; j++ ; 
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int>tree1 ; 
        vector<int>tree2 ; 
        
        inorder(root1,tree1) ;  
        inorder(root2,tree2)  ;
        
        int m = tree1.size()  ; 
        int n = tree2.size()  ; 
        vector<int>ans(n+m); 
        mergeTree(tree1,tree2,ans)  ;
        return ans; 
    }
};