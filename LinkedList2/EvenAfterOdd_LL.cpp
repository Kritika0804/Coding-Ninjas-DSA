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




Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL){
        return head;
    }
    
    Node* evenh=NULL;
        Node* event=NULL;
        Node* oddh=NULL;
       Node* oddt=NULL;
        while(head!=NULL){
            if(head->data%2==0){
                if(evenh==NULL){
                    evenh=head;
                    event=head;
                }
                else{
                    event->next=head;
                    event=event->next;
                }
                
            }
            else{
                if(oddh==NULL){
                    oddh=head;
                    oddt=head;
                }
                else{
                    oddt->next=head;
                    oddt=oddt->next;
                }
            }
            head=head->next;
        }
        
           if(oddh==NULL){
               return evenh;
           }
      
            oddt->next=evenh;
    if(evenh!=NULL){
        event->next=NULL;
    }
            return oddh;
        
        
    
}