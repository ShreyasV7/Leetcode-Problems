class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n = nums.size()  ; 
        
        if(n==0) return {}  ; 
        
        
        int left = nums[0] ; 
        int right = nums[0]  ; 
        
        vector<string>res;  
        
        for(int i=1;i<n;i++){
            
            if(nums[i] == right+1){
                right = nums[i]  ; 
            }
            else{
                if(left==right){
                   res.push_back(to_string(left))  ;  
                      left = nums[i]  ; 
                    right = nums[i]  ; 
                }
                else{
                    string r=""  ; 
                    r+=to_string(left) ; 
                    r+="->"  ; 
                    r+=to_string(right)  ; 
                    res.push_back(r)  ; 
                    left = nums[i]  ; 
                    right = nums[i]  ; 
                }
            }
        }
        
        if(left==right){
            res.push_back(to_string(left))  ;
        }
        else{
             string r=""  ; 
             r+=to_string(left) ; 
             r+="->"  ; 
             r+=to_string(right)  ; 
             res.push_back(r)  ; 
        }
        
        return res; 
        
    }
};