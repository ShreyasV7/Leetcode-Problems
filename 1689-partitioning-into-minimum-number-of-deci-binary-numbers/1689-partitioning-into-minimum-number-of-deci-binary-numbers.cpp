class Solution {
public:
    int minPartitions(string n) {
        
        vector<int>nums;  
        int len = n.size()  ; 
        for(int index = 0 ; index < len ; index++){
            nums.push_back(n[index]-'0') ;  
        }
        
        int maximum = *max_element(nums.begin(),nums.end())  ; 
        return maximum ; 
    }
};