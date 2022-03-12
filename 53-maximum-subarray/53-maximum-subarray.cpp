class Solution {
private:
    void func(int index, int &maxiSum , int&currSum , vector<int>&nums){
        
        if(index == nums.size()) return  ;  
          
        //option1 
        currSum+=nums[index]  ;  
        maxiSum = max(maxiSum , currSum)   ; 
        
        if(currSum < 0) currSum = 0 ; 
         //option2  
        func(index+1,maxiSum,currSum,nums)  ; 
        
    }
public:
    int maxSubArray(vector<int>& nums) {
        
        int index = 0 ; 
        int maxiSum = INT_MIN ; 
        int currSum = 0  ;
        
        func(index,maxiSum,currSum,nums) ;
        
        if(maxiSum ==  INT_MIN) return 0 ; 
        return maxiSum ; 
    }
};