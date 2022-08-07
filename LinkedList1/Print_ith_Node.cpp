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

void printIthNode(Node *head, int i)
{
    //Write your code here
    int cnt=0;
    Node* temp=head;
    while(head!=NULL){
        if(i==cnt){
            cout<<head->data;
        }
        cnt++;
        head=head->next;
        
    }
    
}