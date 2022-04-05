class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l = 0 , r = height.size() -1 ; 
        
        int maxi = 0  ;
        int maximumArea = 0 ; 
        while(l<r){
            
            maxi = min(height[l], height[r]) * (r-l) ;  
            maximumArea = max(maxi,maximumArea)  ; 
            
            if(height[l] > height[r]){
                r--  ; 
            }
            else if(height[l] < height[r]){
                l++  ; 
            }
            else{
                l++ ; 
                r-- ; 
            }
        }
        
        return maximumArea ; 
    }
};