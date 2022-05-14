// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
     void func(vector<int>&nums, int ind,vector<vector<int>>&ans,vector<int>&store){
        
        if(ind>=nums.size())
            return ;  
        
        func(nums,ind+1,ans,store)  ;
        
        store.push_back(nums[ind])  ; 
        func(nums,ind+1,ans,store)  ; 
        ans.push_back(store) ;  
        store.pop_back() ; 
        
        
    }
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        vector<vector<int>>ans;
        vector<int>store; 
        ans.push_back({})  ; 
        func(arr,0,ans,store) ;
        set<vector<int>>st; 
        for(auto j : ans){
            sort(j.begin(),j.end())  ; 
            st.insert(j)  ; 
        }
        
        ans.clear()  ; 
        for(auto k : st){
            ans.push_back(k)  ;
        }
        return ans; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends