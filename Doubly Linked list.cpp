#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node* prev;
};
node* head = NULL;
node *insertatend(int n)
{
node* temp = new node();
temp->data=n;
temp->next=NULL;
if(head == NULL)
    {
temp->prev=NULL;
head = temp;
return head;
    }
node *t = head;
while(t->next!=NULL)
    {
        t = t->next;
    }
temp->prev=t;
t->next=temp;
return head;
}
node *insertatbeg(int n)
{
node* temp = new node();
temp->data=n;
temp->prev=NULL;
if(head == NULL)
    {
temp->next=NULL;
head = temp;
return head;
    }
temp->next = head;
head = temp;
return head;
}
node* deleteatend()
{
node* temp = new node();
temp = head;
node *p=head;
while(temp->next!=NULL)
    {
        p=temp;
temp=temp->next;
    }
p->next=NULL;
temp->prev=NULL;
delete(temp);
return head;
}
node* deleteatbeg()
{
node* temp = new node();
temp = head;
head=head->next;
head->prev=NULL;
temp->next=NULL;
delete(temp);
return head;
}
void print(node *p)
{
node *t = p;
while(t!=NULL)
    {
cout<<t->data<<" ";
        t=t->next;
    }
}
int main()
{
node* t = NULL;
for(int i=10;i<=15;i++)
        t=insertatend(i);
        cout<<"Perfroming Insertion and Deletion:"<<endl;
print(t);
cout<<endl;
    t = insertatbeg(0);
print(t);
cout<<endl;
    t = deleteatend();
print(t);
cout<<endl;
    t = deleteatbeg();
print(t);
return 0;
}

