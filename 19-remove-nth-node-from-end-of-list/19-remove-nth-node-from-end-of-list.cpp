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
    int numberOfNodes(ListNode*head){
        int count = 0  ;
        while(head != NULL){
            head=head->next;  
            count++ ;  
        }
        return count ; 
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL || n==0) return NULL; 
        
        int totalNodes = numberOfNodes(head)  ; 
        int index = totalNodes-n ;
        
        if(totalNodes == 1 && n==1) return NULL; 
        ListNode*temp = head ; 
        int cnt = 1  ;
        while(cnt!=index && temp!=NULL){
            temp=temp->next;  
            cnt++ ; 
        }
        if(totalNodes == n) return  head->next ;
        //temp = temp->next; 
        temp->next = temp->next->next ;
      
        return head ; 
    }
};