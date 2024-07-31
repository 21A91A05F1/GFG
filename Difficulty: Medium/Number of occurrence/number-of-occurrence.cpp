//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int bs(int arr[],int n,int x)
	{
	    int low=0,high=n-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        
	        if(x>arr[mid]) low=mid+1;
	        else high=mid-1;
	    }
	    return low;
	    
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int sp=bs(arr,n,x);
	    int ep=bs(arr,n,x+1)-1;
	    
	    if(sp<n and arr[sp]==x) return ep-sp+1;
	    return 0;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends