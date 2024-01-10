//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    map<int,int>mpp;
	    int s=0,ans=0,maxi=0;
	   // for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	    for(int i=0;i<n;i++)
	    {
	        //cout<<i<<" "<<arr[i]<<endl;
	       // cout<<s<<" ";
	        s+=arr[i];
	       
	        int p=s%k;
	        if(p==0)
	        {
	            maxi=max(maxi,i+1);
	        }
	        if(p<0)
	        {
	            p+=k;
	        }
	        if(mpp.find(p)!=mpp.end())
	        {
	            ans=i-mpp[p];
	            maxi=max(maxi,ans);
	            
	        }
	        else
	        {
	           mpp[p]=i;
	        }
	    }
	   // cout<<endl;
	    //for(auto it:mpp) cout<<it.first<<" "<<it.second<<endl;
	    return maxi;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends