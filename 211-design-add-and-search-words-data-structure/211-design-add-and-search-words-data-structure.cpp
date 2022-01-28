class WordDictionary {
public:
    map<int ,vector<string>>mp ;  
    
    bool func(string &w , string &x){
        if(x.size()!=w.size())
            return 0 ;  
        
        for(int i=0;i<w.size(); ++i){
            if(w[i]!=x[i] && w[i]!='.' )
                return 0 ;  
        }
        
        return 1; 
    }
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        int sz = word.size()  ; 
        mp[sz].push_back(word)  ; 
    }
    
    bool search(string word) {
        
        int sz = word.size()  ; 
        for(int i=0;i<mp[sz].size();i++){
            if(func(word,mp[sz][i]))
                return 1; 
        }
        
        return 0 ; 
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */