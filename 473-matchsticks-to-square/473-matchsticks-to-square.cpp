class Solution {
public:
    //int dp[600][600][600][600]  ;
    bool helper(int ind,int a,int b,int c,int d,vector<int>&m,int n,int req){
        
        if(ind==n){
            return a==0 && b==0 && c==0 && d==0; 
        }
       
        if(m[ind]<=a) if(helper(ind+1,a-m[ind],b,c,d,m,n,req)) return 1   ; 
        if(m[ind]<=b) if(helper(ind+1,a,b-m[ind],c,d,m,n,req)) return 1   ; 
        if(m[ind]<=c) if(helper(ind+1,a,b,c-m[ind],d,m,n,req)) return 1   ; 
        if(m[ind]<=d) if(helper(ind+1,a,b,c,d-m[ind],m,n,req)) return 1   ; 
        
        return 0; 
    }
    bool makesquare(vector<int>& m) {
          
        //memset(dp,-1,sizeof(dp)) ;  
        int sum = 0 , n = m.size()  ; 
        for(int i=0;i<n;i++){
            sum+=m[i]  ;
        }
        sort(m.rbegin(),m.rend())  ;
        if(sum % 4 != 0 ) return false;  
        int req = sum/4;  
        return helper(0,req,req,req,req,m,n,req);  
    }
};