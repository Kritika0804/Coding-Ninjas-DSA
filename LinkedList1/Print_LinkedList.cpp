#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};


void print_ll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    /*
    //Statically
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node *head=NULL;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    head= &n1;
    */

    //Dynamically
    Node* n1=new Node(1);
    Node* n2=new Node(2);
    Node* head=n1;
    n1->next=n2;

    print_ll(head);

    return 0;
}