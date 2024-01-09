//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            int s1=txt.size() , s2=pat.size(),j=0,k=0,f=0;
            vector<int>ve;
            for(int i=0;i<s1-s2+1;i++)
            {
                j=0;
                k=i;
                while(j!=s2)
                {
                    if(txt[k]!=pat[j])
                    {
                        f=1;
                        break;
                    }
                    else
                    {
                        j++;
                        k++;
                    }
                }
                if(j==s2)
                {
                    ve.push_back(i+1);
                }
                
            }
            if(ve.size()==0) ve.push_back(-1);
            return ve;
            
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends