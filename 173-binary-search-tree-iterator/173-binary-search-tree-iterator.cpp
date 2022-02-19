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
class BSTIterator {
private:
    stack<TreeNode*>st ; 
public:
  
    BSTIterator(TreeNode* root) {
        //st.push(root)  ; 
        pushNodes(root)  ; 
    }
    
    int next() {
       TreeNode*curr = st.top()  ; 
       st.pop()  ; 
       if(curr->right) pushNodes(curr->right)  ; 
       return curr->val; 
    }
    
    bool hasNext() {
        if(st.empty()) return false; 
        return true; 
    }
    
    void pushNodes(TreeNode*root){
        while(root != NULL){
            st.push(root)  ; 
            root = root->left ; 
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */