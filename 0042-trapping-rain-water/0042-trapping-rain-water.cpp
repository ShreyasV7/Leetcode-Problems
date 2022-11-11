class Algo{
    private:
    vector<int>leftMaximum(vector<int>&height){
        
        int n = height.size()  ; 
        vector<int>nums(n);  
        nums = height ;  
        for(int i=1;i<n;i++){
            nums[i] = max(nums[i],nums[i-1])  ; 
        }
        return nums; 
    }
    
    vector<int>rightMaximum(vector<int>&height){
        int n = height.size()  ; 
        vector<int>nums(n);  
        nums=height ; 
        for(int i = n-2; i>=0 ; i--){
            nums[i] = max(nums[i],nums[i+1])  ; 
        }
        return nums; 
    }
    public:
    int rainWater(vector<int>&height){
        
        vector<int>prefix = leftMaximum(height)    ;  
        vector<int>suffix = rightMaximum(height)  ; 
        
        
        int total = 0 ; 
        
        for(int i = 0 ; i < height.size() ; i++){
            total+=min(prefix[i],suffix[i])-height[i]  ; 
        }
        
        return total   ;  
    }
} ; 
class Solution {
public:
    int trap(vector<int>& height) {
        
        Algo obj ;  
        return obj.rainWater(height) ;  
    }
};