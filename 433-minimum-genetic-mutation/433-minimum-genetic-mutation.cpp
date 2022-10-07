class Solution {
public:
    int minMutation(string start, string end, vector<string>&bank) {
        
        int n = bank.size()  ; 
        
        queue<string>q;  
        map<string,int>mp ; 
        
        set<string>st; 
        for(auto &it : bank){
            st.insert(it) ; 
        }
        q.push(start)  ; 
        
        int cnt = 0 ; 
        while(q.size()>0){
            int m = q.size()  ; 
            
            for(int i=0;i<m;++i){
                
                string k =""; 
                k+=q.front() ; 
                q.pop()  ; 
                
                if(k==end) return cnt  ; 
                for(auto &it : "AGCT"){
                    for(int j=0;j<k.size();++j){
                        string tempStr=k ; 
                        tempStr[j] = it;  
                        
                        if(mp.find(tempStr)==mp.end() && st.count(tempStr)){
                            st.insert(tempStr) ; 
                            mp[tempStr] = 1;  
                            q.push(tempStr)  ; 
                        }
                    }
                }
            }
            cnt++ ; 
        }        
        return -1 ; 
    }
};