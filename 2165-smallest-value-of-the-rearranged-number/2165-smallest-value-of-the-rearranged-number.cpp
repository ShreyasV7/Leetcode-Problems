class Solution {
private:
    class GenerateValue{
        public:
        long long int smallestNum(long long num){
            string str = to_string(num)  ; 
            
            if(str[0]!='-'){
                sort(str.begin(),str.end())  ; 
                if(str[0]=='0'){
                    int nextBig =0 ;
                    for(int i=0;i<(int)str.size();i++){
                        if(str[i]!='0'){
                            nextBig = i ; 
                            break ; 
                        }
                    }
                    swap(str[0],str[nextBig])  ; 
                }
                
            }
            else{
                sort(str.rbegin(),str.rend())  ;
                str = '-'+str; 
            }
            
            long long int res = stoll(str) ; 
            return res; 
        }
    } ; 
public:
    long long smallestNumber(long long num) {
        GenerateValue obj ; 
        return obj.smallestNum(num)  ; 
    }
};