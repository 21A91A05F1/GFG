//{ Driver Code Starts
// Program to check if linked list is empty or not
#include<iostream>
using namespace std;
const long long unsigned int MOD = 1000000007;

/* Link list Node */
struct Node
{
    bool data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


// } Driver Code Ends
/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
       // import math
        long long power(long long a,long long b)
        {
            int mod=1e9+7;
            long long ans=1;
            while(b!=0)
            {
                if(b&1) 
                {
                    b-=1;
                    ans=(ans%mod * a%mod);
                }
                a=(a%mod * a%mod);
                b/=2;
            }
            return ans%mod;
        }
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           int mod=1e9+7;
           int pw=-1;
           Node* temp=head;
           while(temp!=NULL)
           {
               pw+=1;
               temp=temp->next;
           }
           //cout<<power(2,10);
           Node*temp2=head;
           long long unsigned int res=0;
           while(temp2!=NULL)
           {
               int k=temp2->data;
               int pw2=power(2,pw);
               //cout<<res;
               res=((res%mod)+(k%mod)*(pw2%mod))%mod;
               pw-=1;
               temp2=temp2->next;
               //temp=temp->next;
           }
           return res%mod;
        }
};




//{ Driver Code Starts.

void append(struct Node** head_ref, struct Node **tail_ref, bool new_data)
{

    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isEmpty(struct Node *head);

/* Driver program to test above function*/
int main()
{
    bool l;
    int i, n, T;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        Solution obj;
        cout << obj.decimalValue(head) << endl;
    }
    return 0;
}
// } Driver Code Ends