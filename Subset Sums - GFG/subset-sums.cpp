// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
private:
   void func(int indx, vector<int>&arr, int N, vector<int>&res, int sum){
       
       if(indx >= N){
           res.push_back(sum)  ; 
           return ;
       } 
       
       func(indx+1,arr,N,res,sum+arr[indx])  ; 
       func(indx+1,arr,N,res,sum)  ; 
      
   }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>res;  
        func(0,arr,N,res,0)  ; 
        

        return res; 
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends