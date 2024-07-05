//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int index,unordered_map<int,int>&mpp,vector<int>&dp)
    {
        if(index>=30) return 0;
        if(dp[index]!=-1) return dp[index];
        int mini=INT_MAX;
        for(int i=1;i<=6;i++)
        {
            int k=index+i;
            
            if(mpp.count(k)>0)
            {
                if(mpp[k]<k) continue;
                
                k=mpp[k];
            }
            mini=min(mini,1+solve(k,mpp,dp));
        }
       dp[index]=mini;
       return dp[index];
    }
    int minThrow(int N, int arr[]){
        // code here
        unordered_map<int,int>mpp;
        vector<int>dp(31,-1);
        for(int i=0;i<2*N;i+=2)
        {
            mpp[arr[i]]=arr[i+1];
        }
        // for(auto it:mpp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        return solve(1,mpp,dp);
       // return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends