// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};

int main() {
   node*head,*nnode,*tail;
   int i,n;
   head=NULL;
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
        {
            tail->next=nnode;
            tail=nnode;
        }
    }
    int x;
    cin>>x;
   tail=head;
   while(tail!=NULL)
   {if(tail->data==x)
   {cout<<tail->data<<" was found";
       break;
   }
    tail=tail->next;}
    return 0;
}