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
    
        int SizeLL(ListNode*head){
                
                int cnt = 0 ;  
                ListNode*temp = head ;  
                while(temp != nullptr){
                        
                        temp = temp->next;  
                        cnt++ ;  
                }
                
                return cnt ; 
        }
        
    ListNode* swapNodes(ListNode* head, int k) {
        
            if(head==nullptr)
                    return nullptr;  
            
            ListNode*target1 = head ;  
            ListNode*target2 = head;  
            
            int n = SizeLL(head)  ; 
            
            int first_target = k ;  
            int last_target = n-k+1; 
            
            int cnt =1 ; 
            
            while(cnt != first_target){
                    target1=target1->next;  
                    cnt++  ; 
            }
            
            cnt=1;  
            
            while(cnt != last_target){
                  
                    target2=target2->next; 
                    cnt++  ; 
            }
            
            int temp = target1->val ;  
            target1->val = target2->val ; 
            target2->val = temp  ; 
            
            return head ; 
    }
};