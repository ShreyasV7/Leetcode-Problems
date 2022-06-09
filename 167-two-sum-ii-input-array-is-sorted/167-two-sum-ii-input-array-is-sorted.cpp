class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size()  ;
        
        map<int,int>mp; 
        
        // for(int i = 0 ; i<n ; i++){
        //     mp[numbers[i]] = i ;  
        // }
        
        for(int i=0;i<n;++i){
            
            if(mp.find(target-numbers[i])!=mp.end()){
                
                vector<int>result ; 
                result.push_back(mp[target-numbers[i]] + 1) ;  
                result.push_back(i+1) ; 
                return result ; 
            }
            else
              mp[numbers[i]] = i ; 
        }
        
        return {} ;  
    }
};