class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        int n1 = word1.size() ;
        int n2 = word2.size() ;

        if(n1!=n2) return 0 ;  
        
        vector<int>f1(26,0) ;
        vector<int>f2(26,0) ;
        vector<int>f3(26,0) ;
        vector<int>f4(26,0) ;
        
        for(auto &it:word1){
            f1[it-'a']++  ;
            f2[it-'a']=1 ;
        }
        for(auto &it:word2){
            f3[it-'a']++  ;
            f4[it-'a']=1 ;
        }
        
        sort(f1.begin(),f1.end()) ; 
        sort(f3.begin(),f3.end()) ; 
        
        return (f1==f3 && f4==f2); 
    }
};