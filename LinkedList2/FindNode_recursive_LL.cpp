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


int findNodeRec(Node *head, int n)
{
	//Write your code here
    if(head==NULL)
        return -1;
    if(head->data==n)
        return 0;
    
    int x=findNodeRec(head->next,n);
    if(x==-1)
    {return x;}
    else
        return x+1;
    
}
