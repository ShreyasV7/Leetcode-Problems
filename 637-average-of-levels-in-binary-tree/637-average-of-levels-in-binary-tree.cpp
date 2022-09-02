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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q ; 
        q.push(root)  ;
        vector<double>res;  
        while(q.size()>0){
            
            int sz = q.size()  ;
            vector<double>arr ; 
            while(sz--){
                
                TreeNode*curr = q.front()  ; 
                q.pop()  ; 
                arr.push_back(curr->val)  ; 
                
                if(curr->left) q.push(curr->left)  ; 
                 if(curr->right) q.push(curr->right)  ; 
            }
            
            int szArr = arr.size() ; 
            double sum =0 ;
            for(auto &it : arr){
                sum+=it;  
            }
            
            res.push_back(sum/szArr) ; 
        }
        return res; 
    }
};