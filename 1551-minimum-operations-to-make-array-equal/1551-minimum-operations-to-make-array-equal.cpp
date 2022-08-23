class Solution {
public:
    int minOperations(int n) {
        
        int p = 0 ;  
        
        vector<int>arr(n) ; 
        
        int sum = 0 ; 
        for(int i=0;i<n;i++){
            arr[i] = (2*i)+1;
            sum+=arr[i] ; 
        }
        
        int req = sum/n, cnt = 0  ;
        for(int i=0;i*2 < n ; i++){
            cnt+=abs(arr[i]-req)  ; 
        }
        
        return cnt; 
    }
};