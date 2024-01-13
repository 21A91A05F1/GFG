//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* findmiddle(struct Node* head)
    {
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* Sort(struct Node* list1,struct Node* list2)
    {
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->data<list2->data)
            {
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
            else
            {
                temp->next=list2;
                temp=list2;
                list2=list2->next;
            }
        }
        if(list1) temp->next=list1;
        else temp->next=list2;
        return dummy->next;
    }
    Node* insertionSort(struct Node* head)
    {
        //code here
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        Node* middle=findmiddle(head);
        Node* left=head;
        Node* right=middle->next;
        middle->next=nullptr;
        left=insertionSort(left);
        right=insertionSort(right);
        return Sort(left,right);
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends