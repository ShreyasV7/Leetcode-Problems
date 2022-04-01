class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size()  ;
        
        for(int i = 0 ; i*2 < n ; i++){
            swap(s[i], s[n-i-1])  ; 
        }
        
    }
};