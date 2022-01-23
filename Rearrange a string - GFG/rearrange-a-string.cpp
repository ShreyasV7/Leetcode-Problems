// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        
        int n = str.size()  ;
        int sum = 0  ;
        vector<char>rr ; 
        
        for(int i=0;i<n;++i){
            if(str[i]>='0' && str[i]<='9'){
                sum+=(str[i]-'0')  ; 
            }
            else{
                rr.push_back(str[i]) ;  
            }    
        }
        
        sort(rr.begin(),rr.end())  ; 
        string res=""  ; 
        for(int i=0;i<rr.size();i++){
            res+=rr[i] ;  
        }
        
        string kk = to_string(sum)  ; 
        res+=kk ; 
        
        return res; 
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends