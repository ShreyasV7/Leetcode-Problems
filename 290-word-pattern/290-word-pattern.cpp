class Solution {
public:
    bool wordPattern(string p, string s) {
        string temp = "";
        vector<string>v ; 
        
        
        map<string,int>mp1 ;
        map<char,int>mp2 ;
        
        
        
	   for(int i=0;i<s.size();++i){
		
		  if(s[i]==' '){
             //cout << temp <<" "; 
			 v.push_back(temp);
			 temp = "";
		  }
		  else{
			 temp.push_back(s[i]);
		   }
		
       	}
	    
        v.push_back(temp);
        
        // for(auto k : v){
        //     cout << k <<" " ;  
        // }
        
        for(auto x : v){
            mp1[x]++ ; 
        }
        
        for(auto j : p){
            mp2[j]++ ; 
        }
        
        if(mp1.size()!=mp2.size()){
            return 0 ; 
        }
        
        for(int i=1;i<(int)v.size();i++){
            if((v[i] == v[i-1] && p[i] != p[i-1]) || (v[i]!=v[i-1] && p[i]==p[i-1])){
               // cout << v[i] <<" "<<v[i-1] <<" "<< p[i] <<" "<<p[i-1]<<"\n"  ; 
                cout <<i<<" " ; 
                return 0 ; 
            }
        }
        return 1;
    }
};