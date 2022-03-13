class Solution {
public:
    bool isValid(string s) {
        stack <char>stk  ;
        for(auto m : s){
            
            if(m=='(') stk.push('(') ;
            else
            if(m=='[') stk.push('[') ; 
            else
            if(m=='{') stk.push('{') ; 
            else 
            if(m==')'){
                if(stk.empty() || stk.top()!= '(') return false ; 
                else stk.pop()  ; 
            }
            else 
            if(m==']'){
                if(stk.empty() || stk.top()!= '[') return false ; 
                else stk.pop()  ; 
            }
            else 
            if(m=='}'){
                if(stk.empty() || stk.top()!= '{') return false ; 
                else stk.pop()  ; 
            }
        }
        
        if(!stk.empty()) return false; 
        return 1; 
    }
};