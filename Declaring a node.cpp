#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node**head_ref,int new_data)
{
	Node*new_node=new Node();
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void insert_after(Node*prev_node,int new_data)
{
	if(prev_node==NULL)
	{
		cout<<"Underflow!";
	}
	Node*new_node=new Node();
	new_node->data=20;
	new_node->next=prev_node->next;
	prev_node->next=new Node();
}
void PrintList(Node* n)
{
    while (n != NULL) {
        cout << n->data<<" ";
        n = n->next;
    }
}
int main()
{

    Node* head= new Node();
    Node* second=new Node();
    Node* third=new Node();
      Node* fourth=new Node();
        Node* fifth=new Node();
        head->data=10;
        head->next=second;
        second->data=20;
        second->next=third;
        third->data=30;
        third->next=fourth;
        fourth->data=40;
        fourth->next=fifth;
        fifth->data=50;
        fifth->next=NULL;
       PrintList(head);
       insert_after(head->next,56);
        return 0;
}

