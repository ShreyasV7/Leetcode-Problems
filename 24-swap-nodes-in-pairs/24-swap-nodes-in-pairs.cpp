/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL)
           return NULL; 
        int cnt = 1  ; 
        ListNode*front = head->next  ; 
        ListNode*back = head ; 
        
        while(front!=NULL){
           if(cnt%2){
              int temp = front->val;
              front->val = back->val ; 
              back->val = temp; 
           }
           cnt++ ; 
           back = front ; 
           front=front->next ;  
        }
        
       return head; 
    }
};