class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
       
        int n = nums.size()  ; 
        
        int mn = INT_MAX; 
        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 1) nums[i]*=2 ; 
        }
        
       priority_queue<int>pq;  
        for(int i=0;i<n;i++){
            mn = min(mn,nums[i])  ; 
            pq.push(nums[i])  ;  
        }
        
//         for(int i=0;i<n;i++){
//             if(nums[i] != mn){
//                 pq.push(nums[i]) ; 
//             }
//         }
        
        
        int res = INT_MAX;  
        while(pq.top() % 2 == 0){
            res = min(res, pq.top()-mn)  ;
            mn = min(mn,pq.top()/2)  ; 
            pq.push(pq.top()/2) ; 
            pq.pop()  ; 
        }
        
        return min(res,pq.top()-mn) ; 
    }
};