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
    class Level{
        public:
        int functionLevel(TreeNode*root){
            queue<TreeNode*>nodes; 
            int minimumLevel = 0; 
            
            nodes.push(root)  ; 
            int Level = 0 ; 
            int maximum = INT_MIN ; 
            while(!nodes.empty()){
                
                int currSize = nodes.size()  ; 
                int currSum = 0  ; 
                Level++ ; 
                while(currSize > 0){
                    
                    TreeNode*currentNode = nodes.front()  ;
                    nodes.pop() ; 
                    
                    if(currentNode != NULL)
                     currSum+=currentNode->val ; 
                    
                    if(currentNode->left!=NULL)
                        nodes.push(currentNode->left) ; 
                    
                    if(currentNode->right!=NULL)
                        nodes.push(currentNode->right) ;   
                    
                    currSize-- ; 
                }
                
                if(currSum > maximum){
                    maximum = currSum ; 
                    minimumLevel = Level ; 
                }
            }
            
            return minimumLevel ; 
        }
    } ; 
    int maxLevelSum(TreeNode* root) {
        
        Level obj ; 
        int ans = obj.functionLevel(root)  ; 
        return ans; 
    }
};