#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node*next;
};

int main()
{
    node *head,*nnode,*tail;
    head=NULL;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        nnode=new(node);
        cin>>nnode->data;
        nnode->next=NULL;

        if(head==NULL)
        {
            head=nnode;
            tail=nnode;
        }
        else
        {  tail->next=nnode;
           tail=nnode;
        }
    }

    tail=head;
    while(tail!=NULL)
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }


     tail=head;
    while(tail->next->next!=NULL)
    {
        tail=tail->next;

    }  tail->next=NULL;

    cout<<endl;
    tail=head;
    while(tail!=NULL)
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }


return 0;
}
