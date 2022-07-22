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
    ListNode* partition(ListNode* head, int x) {
        ListNode*smallHead = new ListNode(0)  ;  
        ListNode*bigHead = new ListNode(0)  ; 
        ListNode*small = smallHead;  
        ListNode*big = bigHead; 
        
        while(head){
            if(head->val >= x){
                
                big->next = head; 
                big = big->next; 
            }
            else{
                
                small->next = head; 
                small = small->next;
            }
            head=head->next; 
        }
        
        // Merging both linkedlist; 
        big->next=NULL;
        small->next = bigHead->next; 
          
        return smallHead->next; 
    }
};