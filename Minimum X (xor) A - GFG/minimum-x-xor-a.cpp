// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int f(int a){
        int cnt = 0 ; 
        while(a>0){
            if(a&1==1) cnt++  ;
            a=a>>1 ;
        }
        return cnt; 
    }
    int minVal(int a, int b) {
        // code here
        int c1 = f(a)  ; 
        int c2 = f(b)  ; 
        
        vector<int>bits(32,0) ; 
        for(int i=31;i>=0;i--){
            if((a&(1<<i))!=0) bits[i] = 1;  
        }
        
        if(c1==c2) return a;  
        
        if(c1>c2){
            for(int i=0;i<32&&c1>c2;i++){
                if(bits[i]==1){
                    bits[i]=0 ; 
                    c1-- ; 
                }
            }
        }
        
        if(c2>c1){
            for(int i=0;i<32&&c1<c2;i++){
                if(bits[i]==0){
                    bits[i]=1 ; 
                    c1++ ; 
                }
            }
        }
        
        int res = 0 ;
        for(int i=31;i>=0;i--){
            res+=bits[i]*(1<<i)  ; 
        }
        return res; 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends