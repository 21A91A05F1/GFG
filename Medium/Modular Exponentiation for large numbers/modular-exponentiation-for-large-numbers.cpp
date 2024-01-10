//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int a,long long int b,long long int M)
		{
		    // Code here    
		    int res=1;
		    while(b)
		    {
		        if(b&1)
		        {
		            b-=1;
		            res=(res%M*a%M)%M;
		        }
		        else
		        {
		            b/=2;
		            a=(a%M * a%M)%M;
		        }
		    }
		    return res%M;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends