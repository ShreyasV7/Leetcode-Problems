class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
        sort(arr.begin(),arr.end()) ; 
        
        int length=arr.size(); 
     
        vector<float>decimals ;
        
        for(int outer = 0; outer < length; outer++){
            for(int inner=outer+1; inner<length; inner++){
                
                float currFrac=static_cast<float>(arr[outer])/arr[inner];
               // cout << currFrac<<"\n" ;
                decimals.push_back(currFrac); 
            }
        }
        
        sort(decimals.begin(),decimals.end()) ; 
        
        float kthFrac = decimals[k-1] ; 
        
        
        for(int outer = 0; outer < length; outer++){
            for(int inner=outer+1; inner<length; inner++){
                
                 float currFrac=static_cast<float>(arr[outer])/arr[inner];
                if(kthFrac==currFrac){
                    return {arr[outer],arr[inner]} ;
                }
            }
        }
        
        // Time complexity = O(nlogn) {Binary Search} + O(n^2) {loops} = O(n^2)
        // Space complexity = O(n) => to store decimals
        
        
        return {} ;
    }
};