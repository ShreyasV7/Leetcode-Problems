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
    ListNode*reverseLinkedList(ListNode*head){
        
        ListNode*cur = head ; 
        ListNode*prv = NULL ; 
        
        while(cur!=NULL){
            ListNode*temp = cur->next; 
            cur->next = prv ; 
            prv = cur ; 
            cur=temp ; 
        }
        return prv ; 
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode*fast = head ; 
        ListNode*slow = head ; 
        
        while(fast->next != NULL && fast->next->next!=NULL){
            slow=slow->next; 
            fast=fast->next->next;  
        }
        
        slow->next = reverseLinkedList(slow->next)  ; 
        slow=slow->next;  
        
        while(slow!=NULL){
            if(head->val != slow->val) return false;  
            head=head->next ;
            slow=slow->next ; 
        }
        return true ;
    }
};