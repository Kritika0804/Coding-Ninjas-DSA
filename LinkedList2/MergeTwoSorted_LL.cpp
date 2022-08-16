#include<iostream>
using namespace std;
/*****************************************************************
 
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


Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    if(head1==NULL && head2==NULL){
        return head;
    }
    if(head1==NULL && head2!=NULL){
        head=head2;
        
        while(head2!= NULL){
            tail=head2;
            tail=tail->next;
            head2=head2->next;
        }
        return head;
    }
    if(head1!=NULL && head2==NULL){
        head=head1;
        
        while(head1!= NULL){
            tail=head1;
            tail=tail->next;
            head1=head1->next;
        }
        return head;
    }
    
    
    
    if(head1->data<=head2->data){
        head=head1;
        tail=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        tail=head2;
        head2=head2->next;
    }
    
    while(head1!=NULL && head2!= NULL){
        if(head1->data<=head2->data){
            tail->next = head1;
            tail=tail->next;
            head1=head1->next;
        }
        else{
        tail->next = head2;
        tail=tail->next;
        head2=head2->next;
        }
    }
    
    if(head1==NULL){
        tail->next=head2;
    }
    if(head2==NULL){
        tail->next=head1;
    }
    return head;
}