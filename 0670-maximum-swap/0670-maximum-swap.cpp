class Solution {
public:
    int maximumSwap(int num) {
        
        string str=to_string(num)  ; 
        unordered_map<int,int>mp ;  
        
        int l = str.size() ;  
        for(int i=0;i<l;++i){
            mp[str[i]-'0']=i;
        }
        
        for(int i=0;i<l;++i){
            for(int j=9; j>(str[i]-'0'); j--){
                
                if(i < mp[j]){
                    swap(str[i],str[mp[j]])  ; 
                    return stoi(str);  
                }
            }
        }
        return stoi(str) ; 
    }
};