//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void fun(int oc,int cc,int n,string &s,vector<string>&res)
    {
        
        
        if(oc>=n and cc>=n) 
        {
            if(oc==n and cc==n) res.push_back(s);
            return;
        }
        if(oc<n)
        {
            s.push_back('(');
            fun(oc+1,cc,n,s,res);
            s.pop_back();
        }
        if(cc<n and oc>cc )
        {
            s.push_back(')');
            fun(oc,cc+1,n,s,res);
            s.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>res;
        string s;
        fun(0,0,n,s,res);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends