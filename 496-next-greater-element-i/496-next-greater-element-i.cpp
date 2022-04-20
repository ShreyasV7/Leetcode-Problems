class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr ; 
        
        for(int i=0 ; i < nums1.size(); ++i){
            
            int lar = nums1[i]  , j =0   ; 
            
            while(nums2[j] != lar) j++ ;  
            
            for( ; j < nums2.size() ; j++){
                if(nums2[j] > lar){
                    lar = nums2[j]  ; 
                    arr.push_back(nums2[j]) ; 
                    break ; 
                }
            }
            if(lar == nums1[i]){
                arr.push_back(-1)  ; 
            }
        }
        
        return arr; 
    }
};