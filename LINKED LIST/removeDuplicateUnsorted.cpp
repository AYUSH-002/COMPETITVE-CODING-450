// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {if (head == nullptr) {
        return nullptr;
    }

    set<int> uniqueElements;
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (uniqueElements.find(current->data) != uniqueElements.end()) {
            prev->next = current->next;
            delete current;
        } else {
            uniqueElements.insert(current->data);
            prev = current;
        }
        current = prev->next;
    }

    return head;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends