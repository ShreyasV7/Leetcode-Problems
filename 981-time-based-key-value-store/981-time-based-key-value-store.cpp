class TimeMap {
public:
    TimeMap() {
    }
    
    unordered_map<string , vector<pair<int,string>>>mp ; 
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value})  ; 
    }
    
    string get(string key, int timestamp) {
        
        if(mp.find(key) == mp.end()) return ""  ; 
        
        int low = 0, high = mp[key].size()  ; 
        
        while(low < high){
            int mid = (low+high)/2 ;  
            
            if(mp[key][mid].first > timestamp) high = mid ; 
            else low = mid+1; 
        }
        
        //if(mp[key][low].first == timestamp) return mp[key][low].second;  
        
        if(low > 0 && low <= mp[key].size()) return mp[key][low-1].second;  
        return "" ;  
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */