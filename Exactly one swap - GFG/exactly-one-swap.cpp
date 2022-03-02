// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
typedef long long int ll ;  
class Solution
{
public:
    long long countStrings(string s)
    {
        ll n = s.length(); 
        unordered_map<char,int>mp ; 
        
        for(char it : s){
            mp[it]++ ; 
        }
        
        ll res = 0,d =0   ; 
        for(auto &it : mp){
            if(it.second >= 2) d = 1 ;  
        }
        
        for(ll i = 0 ; i<n; i++){
            res+=(n-i-mp[s[i]])  ; 
            mp[s[i]]-- ;  
            //cout << res <<"\n"  ; 
        }
        //cout << res <<"\n"  ; 
        if(d) res++ ; 
        return res; 
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends