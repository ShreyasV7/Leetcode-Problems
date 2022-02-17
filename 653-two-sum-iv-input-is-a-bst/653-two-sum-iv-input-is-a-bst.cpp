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
    void inorder(TreeNode*root , vector<int>&sortedOrder){
        if(root == NULL) return  ; 
        if(root->left) inorder(root->left,sortedOrder)  ; 
        sortedOrder.push_back(root->val)  ; 
        if(root->right) inorder(root->right,sortedOrder)  ;
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>sortedOrder ; 
        inorder(root, sortedOrder)  ; 
        
        int n = sortedOrder.size()  ; 
        
        map<int,int>mp  ; 
        
        for(int i=0;i<n;i++){
            if(mp.find(k-sortedOrder[i]) != mp.end()){
                return true;  
            }
            else{
                mp[sortedOrder[i]] = 1 ; 
            }
        }
        
        return false; 
    }
};