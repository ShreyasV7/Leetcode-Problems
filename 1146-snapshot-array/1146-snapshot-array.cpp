class SnapshotArray {
private:
    map<pair<int,int>,int>mp ; 
    int snaps = 0  ; 
public:
    SnapshotArray(int length) {
        
    }
    
    void set(int index, int val) {
        mp[{index,snaps}] = val ;  
    }
    
    int snap() {
        return snaps++ ;  
    }
    
    int get(int index, int snap_id) {
        
        pair<int,int>key = {index,snap_id}  ; 
        
        auto iterator = mp.upper_bound(key) ; 
        if(iterator == mp.begin())
            return 0 ; 
        iterator-- ; 
        
        if(iterator->first.first != index) return 0 ; 
        else{
            int res = iterator->second ; 
            return res; 
        }
        return -1; 
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */