class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>freq(26,0)  ;
        int n=s.size() ; 
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++ ; 
        }
        for(int i=0;i<26;++i){
            if(freq[i]==0){
                return 0 ; 
            }
        }
        return 1; 
    }
};