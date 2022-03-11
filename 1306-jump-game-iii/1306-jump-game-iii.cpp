class Solution {
private:
    bool func(int curr , vector<int>&arr){
        int len = arr.size()   ;
        queue<int>q ; 
        vector<int>visit(len,0)  ;  
        if(curr-arr[curr] >= 0 && curr-arr[curr] <= len-1){
            visit[curr-arr[curr]] = 1 ;
            q.push(curr-arr[curr])  ; 
        }
        
        if(curr+arr[curr] >= 0 && curr+arr[curr] <= len-1){
             visit[curr+arr[curr]] = 1 ;
            q.push(curr+arr[curr])  ; 
        }
        
        
        
        while(q.size() > 0 ){
            
            int currInd = q.front()  ;  
            q.pop()   ; 
            
            if(arr[currInd]==0) return 1;  
            
            if(currInd-arr[currInd] >= 0 && currInd-arr[currInd] <= len-1 && visit[currInd-arr[currInd]] == 0){
                visit[currInd-arr[currInd]] = 1 ; 
               q.push(currInd-arr[currInd])  ; 
            }
        
             if(currInd+arr[currInd] >= 0 && currInd+arr[currInd] <= len-1 &&  visit[currInd+arr[currInd]] == 0){
                visit[currInd+arr[currInd]] = 1 ; 
                q.push(currInd+arr[currInd])  ; 
             }   
        }
        
        return 0 ; 
    }
public:
    bool canReach(vector<int>& arr, int start) {

        bool ans = func(start,arr) ;
        return ans; 
    }
};