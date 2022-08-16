/****************************************************************
 
    Following is the class structure of the Node class:

*****************************************************************/
#include<iostream>
using namespace std;
class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

/*

//Meathod 1: TC = O(n^2)

Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
    if(head == NULL || head -> next == NULL) {
		return head;
	}

	Node *smallAns = reverseLinkedListRec(head -> next);

	Node *temp = smallAns;
	while(temp -> next != NULL) {
		temp = temp -> next;
	}

	temp -> next = head;
	head -> next = NULL;
	return smallAns;
    
}

*/


/*

Meathod 2: TC=O(n)

class Pair{
    public:
    Node* head=NULL;
    Node* tail=NULL;
};
Pair reverseLinkedListRec(Node *head){
    if(head==NULL || head->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallAns=reverseLinkedListRec(head->next);

    smallAns.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallAns.head;
    ans.tail=head;
    return ans;
}

*/

//Meathod 3: TC=O(n)
Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
    if(head == NULL || head -> next == NULL) {
		return head;
	}

	Node *smallAns = reverseLinkedListRec(head -> next);

	Node *tail = head->next;
	

	tail -> next = head;
	head -> next = NULL;
    
	return smallAns;
    
}
