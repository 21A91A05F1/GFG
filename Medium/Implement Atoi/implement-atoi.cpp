//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n=str.size(),f=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='-' and i==0) 
            {
                f=1;
                continue;
            }
            if(str[i]>='0' and str[i]<='9')
            {
                res=res*10+(str[i]-'0');
            }
            else return -1;
        }
        if(f) return -1*res;
        return res;
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends