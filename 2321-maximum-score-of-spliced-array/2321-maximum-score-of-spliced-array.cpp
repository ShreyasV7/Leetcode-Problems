class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size()  ; 
        // int m = nums2.size()  ; 
        
        int sum1 = 0 , sum2 = 0  ;
        
        for(int i=0 ; i < n; i++) sum1+=nums1[i]  ;
        for(int i=0 ; i < n; i++) sum2+=nums2[i]  ;
    
        int mxSum1 = 0 , mxSum2 = 0 , currS1=0,currS2 = 0 ; 
        for(int i=0;i<n;i++){
            currS1+=nums2[i]-nums1[i]  ;
            if(currS1 < 0 ) currS1 =  0 ; 
            mxSum1 = max(mxSum1,currS1)  ;  
        }
        
        for(int i=0;i<n;i++){
            currS2+=nums1[i]-nums2[i]  ;
            if(currS2 < 0 ) currS2 =  0 ; 
            mxSum2 = max(mxSum2,currS2)  ;  
        }
        
        
        return max(sum1+mxSum1, sum2+mxSum2)  ; 
        
    }
};