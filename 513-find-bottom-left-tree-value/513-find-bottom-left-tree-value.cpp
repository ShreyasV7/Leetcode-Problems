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
    int heightOfTree(TreeNode*root){
        if(root==NULL) return 0 ;  
        return 1+max(heightOfTree(root->left) , heightOfTree(root->right))  ; 
    }
    int findBottomLeftValue(TreeNode* root){
        if(root==NULL) return 0;  
        TreeNode*k = root ; 
        int height = heightOfTree(k) ; 
        
        queue<TreeNode*>q;  
        q.push(root) ;  
        int lvl = 0 , answer; 
      //  cout << height <<"\n"  ; 
        vector<TreeNode*>arr;  
        
        while(q.size()){
            
            int sz = q.size()  ;
            vector<int>arr ; 
            
            while(sz--){
                
                TreeNode*curr = q.front() ;  
                q.pop()  ; 
                arr.push_back(curr->val)  ; 
               if(curr->left){
                  q.push(curr->left) ;  
               } 
            
               if(curr->right){
                  q.push(curr->right) ; 
               }
            }
            
            lvl++ ; 
            
            if(lvl==height){
                answer = arr[0]  ;
                //break ; 
            }
        }
        
        return answer ;
    }
};