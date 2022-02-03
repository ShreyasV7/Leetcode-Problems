// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ExcelColumn(int N){
        if(N==1){
            return "A"  ; 
        }
        
        string res=""  ; 
        
        while(N > 0){
            char rem = ((N-1) % 26) + 'A' ; 
            res+=rem ; 
            N = (N-1)/26;  
        }
        reverse(res.begin(),res.end())  ;
        return res ; 
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends