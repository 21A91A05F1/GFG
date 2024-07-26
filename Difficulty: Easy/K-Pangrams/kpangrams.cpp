//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
      string s = "";
        for(auto i :str)
        {
            if(i== ' ')continue;
            else s+=i;
        }
        
        if(s.length()<26)return 0;
        set<char>st;
        for(int i=0;i<s.length();i++)
        {
            st.insert(s[i]);
        }
        if(st.size()+k >=26 || st.size()>=26)return 1;
        return 0;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends