class WordFilter {
public:
    unordered_map<string,int>mp ;  
    WordFilter(vector<string>& words) {
        
        for(int i=0;i<words.size();++i){
            int m = words[i].size()  ; 
            string curr=words[i]  ; 
            for(int j=1;j<=m;j++){
                string f1=curr.substr(0,j)  ;
                for(int k =0 ;k<m;k++){
                     string f2 = curr.substr(k,m)  ; 
                      mp[f1+"-"+f2] = i+1 ; 
                      //cout << f1 <<" "<< f2 <<"\n"  ; 
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        
        //if(mp[prefix+"-"+suffix]==0) return -1 ; 
        return mp[prefix+"-"+suffix]-1 ; 
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */