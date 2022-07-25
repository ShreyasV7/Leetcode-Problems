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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      
        vector<int>arr ; 
        
        ListNode*l1=list1; 
        ListNode*l2=list2; 
        
        while(l1){
            arr.push_back(l1->val)  ;
            l1=l1->next; 
        }
        
        while(l2){
            arr.push_back(l2->val) ; 
            l2 = l2->next ; 
        }
        
        sort(arr.begin(),arr.end())  ; 
        
        ListNode*start = new ListNode(-1)  ; 
        ListNode*prev=start; 
        
        for(int i=0;i<arr.size();i++){
            ListNode*temp = new ListNode(arr[i]) ;
            prev->next = temp ; 
            prev=prev->next; 
        }
        
        return start->next; 
    }
};