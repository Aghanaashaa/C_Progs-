#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int x;
node *next;
};
node *head = NULL;
node* insertnodeatend(int n)
{
node* temp = new node();
temp->x = n;
temp->next = NULL;
if(head == NULL)
head = temp;
else
    {
node* p = head;
while(p->next!=NULL)
        {
            p=p->next;
        }
p->next = temp;
    }
return head;
}
node *insertnodeatbeg(int n)
{
node* temp = new node();
temp->x=n;
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
node *deleteatend()
{
node* temp = new node();
node *p = head,*t=head;
while(p->next!=NULL)
    {
        t=p;
        p=p->next;
    }
temp = t->next;
t->next = NULL;
delete(temp);
return head;
}
node *deleteatbeg()
{
node* temp = new node();
temp = head;
head=head->next;
temp->next=NULL;
delete(temp);
return head;
}
void print(node *p)
{
node *t = p;
while(t!=NULL)
    {
cout<<t->x<<" ";
        t=t->next;
    }
}
int main()
{
node* t = NULL;
for(int i=10;i<=15;i++)
{
        cout<<"Performing Insertion:"<<endl;
        t=insertnodeatend(i);
print(t);
cout<<endl;
    t =insertnodeatbeg(0);
print(t);
cout<<endl;
cout<<"Perfroming Deletion:"<<endl;
    t =deleteatend();
print(t);
cout<<endl;
    t =deleteatbeg();
print(t);
}
return 0;
}

