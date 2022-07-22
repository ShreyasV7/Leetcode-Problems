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
        vector<int>EqGreaterX , SmallX;  
        ListNode*h1 = head ; 
        while(h1){
            if(h1->val >= x) EqGreaterX.push_back(h1->val)   ;
            else SmallX.push_back(h1->val)  ; 
            h1 = h1->next;  
        }
        
        ListNode*newHead = head ; 
        
         for(int index = 0 ; index < SmallX.size(); index++){
            newHead->val  = SmallX[index]  ; 
            newHead=newHead->next ; 
        }
        
        
        //newHead = head;  
        
        
        for(int index = 0 ; index < EqGreaterX.size(); index++){
            newHead->val  = EqGreaterX[index]  ; 
            newHead=newHead->next ; 
        }
        
        
        delete newHead ;
        return head; 
    }
};