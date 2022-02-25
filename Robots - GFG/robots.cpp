// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string moveRobots(string s1, string s2){
        
        int i =  0 , j = 0 ; 
        
        if(s1.length()!=s2.length()){
            return "No"  ; 
        }
        
        int n = s2.length() ; 
        bool ok  =1 ;
        while(i<n && j<n){
            while(s1[i]=='#') i++ ;  
            while(s2[j]=='#') j++  ;
            
            if(s1[i]!=s2[j]) ok = 0 ;  
            
            if(s1[i]=='B' && i>j) ok = 0  ; 
            
            if(s1[i]=='A' && j>i) ok = 0  ;
            i++ ; 
            j++ ; 

        }
        
        if(ok){
            return "Yes" ; 
        }
        
        return "No"  ; 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends