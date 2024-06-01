//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        unordered_map<char,int>mpp;
        int x=0,y=0;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        for(auto it:mpp)
        {
            int a=it.first-'a'+1;
            if(a%2==0 and it.second%2==0)
            {
                //cout<<s[i]<<endl;
                x++;
            }
            else if(a%2==1 and it.second%2==1)
            {
                y++;
            }
        }
       // cout<<x<<" "<<y<<endl;
        if((x+y)%2==0) return "EVEN";
        return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends