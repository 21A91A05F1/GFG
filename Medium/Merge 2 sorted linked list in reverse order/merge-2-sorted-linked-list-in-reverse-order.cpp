//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
         Node *nn=newNode(0);
        Node *t1=node1, *t2=node2, *n=nn;
        while(t1!=NULL and t2!=NULL){
            if(t1->data>t2->data){
                n->next=t2;
                n=n->next;
                t2=t2->next;
            }
            else{
                n->next=t1;
                n=n->next;
                t1=t1->next;
            }
        }
        while(t1!=NULL){
             n->next=t1;
             n=n->next;
             t1=t1->next;
        }
         while(t2!=NULL){
             n->next=t2;
             n=n->next;
             t2=t2->next;
        }
        Node *t=nn->next;
        
        //reverse
        Node *curr=t,*temp,*prev=NULL;
        
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
       
        return prev;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends