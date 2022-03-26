class SearchAlgorithm{
    public:
    int binarySearch(vector<int>&nums, int target){
        int low = 0 , high = nums.size()-1 ; 
        //int result = 0 ; 
        
        while(low <= high){
           
            int mid = (low+high)/2; 
            if(nums[mid]==target){
                return mid; 
            }
            else if(nums[mid] > target){
                high = mid-1 ; 
            }
            else{
                low=mid+1;
            }
        }
        
        return -1;  
    }
} ; 
class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        SearchAlgorithm obj ; 
        return obj.binarySearch(nums,target) ;  
    }
};