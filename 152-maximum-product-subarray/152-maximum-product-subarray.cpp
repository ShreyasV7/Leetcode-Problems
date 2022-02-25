
class Product{
public:
int maximumProd(vector<int>&nums){
    
    int leftProd = nums[0] , n = nums.size();
    
    bool zero = 0 ;
    
    int p = 1; 
    
    for(int i=0;i<n ;i++){
        if(nums[i] != 0 ){
            p*=nums[i]  ; 
        }
        else{
            zero = 1;  
            p = 1 ; 
            continue; 
        }
        leftProd = max(leftProd , p)  ; 
    }
    
    int rightProd = nums[0] ; 
    
    zero = 0 ;
    p = 1;  
    for(int i=n-1;i>=0 ;i--){
        if(nums[i] != 0 ){
            p*=nums[i]  ; 
        }
        else{
            zero = 1;  
            p = 1 ; 
            continue; 
        }
        rightProd = max(rightProd, p)  ; 
    }
    
    //cout << leftProd <<" "<< rightProd ; 
    if(zero){
        return max({leftProd, rightProd, 0})  ; 
    }
    
    return max(leftProd, rightProd)  ; 
  }
} ; 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        Product obj ; 
        int ans = obj.maximumProd(nums)  ; 
        return ans; 
    }
};