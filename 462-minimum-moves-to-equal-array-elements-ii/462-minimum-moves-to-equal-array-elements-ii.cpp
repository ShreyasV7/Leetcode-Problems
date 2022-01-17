class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
      
        
        int n = nums.size()  ;
          // if(n==1)
          //   return nums[0]  ; 
        sort(nums.begin(),nums.end())  ;
        
        int middle = n/2 ; 
        
        cout << middle <<"\n"  ; 
        
        int sum = 0 ;  
        
        for(int i=0;i<n;++i){
            sum+=abs(nums[i]-nums[middle]) ;  
        }
        
        return sum ; 
    }
};