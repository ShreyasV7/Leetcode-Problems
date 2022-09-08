class Solution {
public:
    int isPalindrome(int index1, int index2, string &s,vector<vector<int>>&cache){
        
        if(index1 >= index2) return 1;  
        
        if(cache[index1][index2]!=-1) return cache[index1][index2]  ; 
        if(s[index1]!=s[index2]) return cache[index1][index2] = 0 ; 
        
        return cache[index1][index2] = isPalindrome(index1+1,index2-1,s,cache) ;  
        
    }
    int countSubstrings(string s) {
        
        int len = s.size()  , total=0  ; 
        vector<vector<int>>cache(len+1,vector<int>(len+1,-1)) ; 
        
        for(int index1 = 0 ; index1 < len ; index1++){
            for(int index2 = index1 ; index2 < len ; index2++){
                
                total+=isPalindrome(index1,index2,s,cache)  ; 
            }
        }
        return total ; 
    }
};