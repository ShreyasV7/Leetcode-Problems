class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int countOnes = 0; 
        
        int n = s.size() ; 
        for(int i=0; i<n; i++){
            if(s[i]=='1') countOnes++ ; 
        }
        
        string res(n,'0') ; 
        
        for(int i=0; i<n-1; i++){
            if(countOnes>1){
                res[i]='1'; 
                countOnes--; 
            }
            else break ; 
        }
        
        res[n-1] = '1' ; 
        return res; 
    }
};