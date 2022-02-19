class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        long long a = num/3 ; 
        long long b = num/3 - 1;  
        long long c = num/3 + 1;  
        
        vector<long long>ans ; 
        if(a+b+c !=num){
           return ans; 
        }
        else{
             ans.push_back(b) ; 
             ans.push_back(a) ; 
             ans.push_back(c) ; 
            return ans;
        }
    }
};