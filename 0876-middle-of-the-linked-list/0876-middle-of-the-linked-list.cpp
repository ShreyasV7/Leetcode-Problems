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
    int LengthOfList(ListNode*head){
        int cnt = 0 ; 
        while(head){
            head=head->next;
            cnt++ ; 
        }
        return cnt ;
    }
    ListNode* middleNode(ListNode* head) {
        int length = LengthOfList(head)  ; 
        ListNode*h1 = head;  
        for(int i=0;i<length/2; ++i){        

            h1=h1->next; 
        }
        return h1; 
    }
};