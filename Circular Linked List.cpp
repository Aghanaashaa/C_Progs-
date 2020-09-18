#include<iostream>
using namespace std;
class node
{
public:
int data;
node *next;
};
node* last = NULL;
node* insertatend(int n)
{
node* temp = new node();
temp->data=n;
if(last == NULL)
    {
temp->next=temp;
last=temp;
return last;
    }
temp->next=last->next;
last->next=temp;
last = temp;
return last;
}
node *insertatbeg(int n)
{
node* temp = new node();
temp->data=n;
temp->next=last->next;
last->next=temp;
return last;
}
node *deleteatend()
{
node* temp = last->next;
node* prev = last->next;
if(last == NULL)
return NULL;
if(temp->next == last)
    {
last == NULL;
delete(temp);
return last;
    }
while(temp!=last)
    {
prev = temp;
temp = temp->next;
    }
prev->next=temp->next;
last = prev;
temp->next=NULL;
delete(temp);
return last;
}
node *deleteatbeg()
{
node *temp = last->next;
if(last == NULL)
return NULL;
if(temp->next == last)
    {
last = NULL;
delete(temp);
return last;
    }
temp = last->next;
last->next=last->next->next;
temp->next=NULL;
delete(temp);
return last;
}
void print(node* p)
{
if(p!=NULL)
    {
do
        {
cout<<p->next->data<<" ";
            p=p->next;
}while(p!=last);
    }
}
int main()
{
node* t = NULL;
for(int i=10;i<=15;i++)
        t=insertatend(i);
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

