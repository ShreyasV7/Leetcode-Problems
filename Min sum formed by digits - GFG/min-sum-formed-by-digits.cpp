// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    typedef long long int ll ; 
    long long int minSum(int arr[], int n)
    {
        ll s1 = 0 , s2 = 0  ;
        vector<ll>r(n)  ;
        for(ll i = 0 ; i<n; i++){
            r[i]=arr[i]  ; 
        }
        
        sort(r.begin(),r.end())  ; 
        
        for(ll i = 0 ; i<n ; ++i){
            if(i%2){
                s2*=10 ;
                s2+=r[i]  ; 
            }
            else{
                s1*=10 ; 
                s1+=r[i]  ; 
            }
        }
        
        return s1+s2; 
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends