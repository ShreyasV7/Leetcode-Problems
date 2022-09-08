class Solution {
public:
    int isPalindrome(int index1, int index2, string &s){
        
        int left = index1 , right = index2 ; 
        
        while(left<=right){
            if(s[left]!=s[right]) return 0 ;  
            left++ ; 
            right-- ; 
        }
        return 1; 
    }
    int countSubstrings(string s) {
        
        int len = s.size()  , total=0  ; 
        for(int index1 = 0 ; index1 < len ; index1++){
            for(int index2 = index1 ; index2 < len ; index2++){
                
                total+=isPalindrome(index1,index2,s)  ; 
            }
        }
        return total ; 
    }
};