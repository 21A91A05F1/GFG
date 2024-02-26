//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string nums){
		    // Code here
		vector<string>res;
		int n=nums.size();
        int size=pow(2,n);
        for(int i=0;i<size;i++)
        {
            string s="";
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j)))
                {
                    s+=nums[j];
                }
            }
            if(s!="")res.push_back(s);
        }
        sort(res.begin(),res.end());
        return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends