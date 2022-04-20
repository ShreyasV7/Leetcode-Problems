class MyStack {
public:
    queue<int>q;  
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x) ;  
        
        for(int i = 0 ; i<q.size()-1 ; ++i){
            int t = q.front()  ; 
            q.push(t)  ; 
            q.pop()  ; 
        }
    }
    
    int pop() {
      int k = q.front()  ; 
        q.pop() ; 
        return k ;
    }
    
    int top() {
        return q.front() ;  
    }
    
    bool empty() {
        if(q.size()==0) return 1 ; 
        return 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */