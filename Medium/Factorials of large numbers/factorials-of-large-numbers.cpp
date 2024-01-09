//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ve(100000,1);
        ve[0]=1;
        int k=1,j=0;
        int c=0;
        for(int i=1;i<=N;i++)
        {
            for(j=0;j<k;j++)
            {
                int val=((ve[j]*i)+c);
                ve[j]=val%10;
                c=val/10;
            }
            while(c>=1)
            {
                ve[j]=c%10;
                c/=10;
                k=j;
                j+=1;
               
            }
            k=j;
            //for(int i=0;i<N;i++) cout<<ve[i]<<" ";
        }
        //cout<<endl;
        vector<int>res;
        for(int p=k-1;p>=0;p--) 
        {
            res.push_back(ve[p]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends