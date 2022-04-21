class MyHashSet {
public:
    
    vector<int>hashSet ; 
    MyHashSet() {
        
    }
    
    void add(int key) {
        
         auto iterator = find(hashSet.begin(),hashSet.end(),key) ;  
        if(iterator == hashSet.end())
            hashSet.push_back(key) ;  
    }
    
    void remove(int key) {
        auto iterator = find(hashSet.begin(),hashSet.end(),key) ;  
        if(iterator != hashSet.end())
            hashSet.erase(iterator) ;  
    }
    
    bool contains(int key) {
        auto iterator = find(hashSet.begin(),hashSet.end(),key)  ; 
        if(iterator == hashSet.end()) return 0 ; 
        return 1; 
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */