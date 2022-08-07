#include<iostream>
using namespace std;

/****************************************************************
 
    Following is the class structure of the Node class:

*****************************************************************/
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

int length(Node *head)
{
    //Write your code here
    int count =0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}
