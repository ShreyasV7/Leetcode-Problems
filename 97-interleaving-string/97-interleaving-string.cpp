class Solution {
public:
    int dp[169][169][269]  ; 
    bool f(int ind1,int ind2,int ind3 , string &s1, string &s2, string &s3){
        
        if(s3.length()==ind3) return true ; 
        
        if(dp[ind1][ind2][ind3]!=-1) return dp[ind1][ind2][ind3]  ; 
        
        bool option1 = false, option2 = false;  
        if(ind1!=s1.length()){
            option1 =  s1[ind1]==s3[ind3] && f(ind1+1,ind2,ind3+1,s1,s2,s3)  ; 
        }
        
        if(ind2!=s2.length()){
            option2 = s2[ind2]==s3[ind3] && f(ind1,ind2+1,ind3+1,s1,s2,s3) ; 
        }
        
        // return 0 ; 
        return dp[ind1][ind2][ind3] = (option1 || option2) ; 
    }
    bool isInterleave(string s1, string s2, string s3) {
        
        int len1 = s1.length() ,len2 = s2.length(), len3=s3.length()  ; 
        
        if(len1+len2 > len3) return false; 
        memset(dp,-1,sizeof(dp))  ; 
        return f(0,0,0,s1,s2,s3)  ; 
    }
};