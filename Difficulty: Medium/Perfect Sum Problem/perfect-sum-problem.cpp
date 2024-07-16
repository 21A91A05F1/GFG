//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int fun(int ind,int s,int arr[],int n,int sum,vector<vector<int>>&dp)
	{
	    int mod=1000000000+7;
	    if(ind==n)
	    {
	        if(s==sum)
	        {
	            
	          return 1;
	        }
	        return 0;
	    }
	    if(dp[ind][s]!=-1) return dp[ind][s];
	    int a=0;
	    if(s+arr[ind]<=sum)  a=fun(ind+1,s+arr[ind],arr,n,sum,dp);
	    int b=fun(ind+1,s,arr,n,sum,dp);
	    dp[ind][s]=(a+b)%mod;
	    return dp[ind][s];
	    
	    
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        
        int ind=0,s=0;
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        int k= fun(ind,s,arr,n,sum,dp);
        return k;
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends