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
    void insertNode(ListNode*h1,int value){
        ListNode*curr; 
        curr->val=value; 
        curr->next=NULL; 
        
        if(h1==NULL){
            h1=curr;  
        }
        else{
            ListNode*temp=h1;  
            while(temp!=NULL){
                temp=temp->next; 
            }
            temp->next=curr; 
        }
    }
public:
    vector<int>list;  
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n=lists.size();  
        for(int i=0;i<n;i++){
            ListNode*curr = lists[i];  
            while(curr!=NULL){
                list.push_back(curr->val); 
                curr=curr->next; 
            }
        }
        
        sort(list.begin(),list.end()); 
        
        ListNode*h1=new ListNode(0); 
        ListNode*h2=h1; 
        int m=list.size(); 
        for(int i=0;i<m;i++){
            h1->next = new ListNode(list[i]);  
            h1=h1->next; 
        }
        
        return h2->next; 
    }
};