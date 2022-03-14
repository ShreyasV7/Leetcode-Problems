class Solution {
public:
    int maximumSum(vector<int>& arr) {
        
        int n = arr.size()  ; 
        
        vector<int>prefix(n,0) ; 
        vector<int>suffix(n,0) ; 
        
        int currLeftSum = arr[0]  ; 
        int leftMaxSum = arr[0]  ; 
        
        prefix[0] = arr[0]  ;
        for(int i=1;i<n;i++){
            currLeftSum = max(arr[i] , currLeftSum+arr[i])  ; 
            leftMaxSum = max(leftMaxSum , currLeftSum)  ; 
            prefix[i] = currLeftSum ; 
        }
        
        int currRightSum = arr[n-1]  ; 
        int rightMaxSum = arr[n-1] ;  
        suffix[n-1] = arr[n-1] ; 
        
        for(int i=n-2;i>=0;i--){
            currRightSum = max(arr[i] , currRightSum + arr[i])  ;
            rightMaxSum = max(rightMaxSum,currRightSum) ;  
            suffix[i] = currRightSum ; 
        }
        
        int result = max(leftMaxSum,rightMaxSum); 
        
        for(int i=1;i<n-1;i++){
            
            result = max(result , prefix[i-1] + suffix[i+1]) ;  
        }
        
        return result ; 
    }
};