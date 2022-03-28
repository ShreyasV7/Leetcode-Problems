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
private:
    int LengthOfLinkedList(ListNode*head){
        int length = 0 ;  
        
        while(head!=NULL){
            length++ ; 
            head=head->next;  
        }
        
        return length ; 
    }
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode*temp = head ; 
        int length = LengthOfLinkedList(temp)  ; 
        
        for(int i=0;i < length/2 ; ++i){
            head=head->next; 
        }
        
        return head ;
    }
};