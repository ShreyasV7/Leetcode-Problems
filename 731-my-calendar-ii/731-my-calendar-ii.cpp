class MyCalendarTwo {
public:
    map<int,int>mp ; 
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        mp[start]++ ;   
        mp[end]-- ;  
        
        int bookings = 0 ; 
        
        for(auto &it : mp){
            bookings+=it.second ; 
            if(bookings > 2){
                mp[start]-- ; 
                mp[end]++ ; 
                return 0 ; 
            }
        }
        return 1 ; 
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */