class Solution {
private:
    
    bool isPalindrome(string &s, int i, int j){
        
        int l = i , r = j ; 
        
        while(l<r){
            if(s[l]!=s[r]) return 0; 
            l++ ; 
            r-- ;  
        }
        
        return 1; 
    }
    void helper(string &s, vector<vector<string>>&res, int idx, vector<string>&temp){
        if(idx == s.size()){
            res.push_back(temp)  ; 
            return ;
        }
        
        for(int i=idx ; i<s.size() ; i ++){
            
            if(isPalindrome(s,idx,i)==1){
                temp.push_back(s.substr(idx,i-idx+1))  ; 
                helper(s,res,i+1,temp)  ; 
                temp.pop_back()  ; 
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        
        int n=s.size()  ;  
        
        vector<vector<string>>res ; 
        
        vector<string>temp ; 
        helper(s,res,0,temp)  ; 
        
        return res;  
    }
};