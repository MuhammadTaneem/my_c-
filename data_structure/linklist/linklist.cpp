#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)

/*read input function*/
int nxt()
{
    int x;
    cin>>x;
    return x;
}

/*struct*/
struct node
{
    int data;
    struct node *next;
};
struct node *nptr,*temp=NULL,*head=NULL,*mv=NULL;

/*add function*/
void Add(int x)
{
    if(head==NULL)
    {
        node *nptr =new node;
        nptr->data=x;
        nptr->next=NULL;
        head=nptr;
        return;
    }
    temp=head;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }

    nptr=new node;
    nptr->data=x;
    nptr->next=NULL;
    temp->next=nptr;


}

/*display function*/
void Display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
/*first node delete code */
void Delete_first_node()
{
    temp=head;
    head=temp->next;
    delete(temp);
}
/*last node delete code */
void Delete_last_node()
{
    temp=head;
    while(temp->next!=NULL)
    {
        mv=temp;
        temp=temp->next;
    }
    delete(temp);
    mv->next=NULL;

}

/*delet by index */
void Delete_mid_node_index(int fr)
{
    temp=head;
    if(fr==1)
    {
        head=temp->next;
        delete(temp);
        return;
    }
    int i=1;
    while(true)
    {
        if(i==(fr-1))
        {
            temp->next=temp->next->next;
            delete(temp->next);
            break;
        }
        temp=temp->next;
        i++;
    }


}

/*delete node by value */
void Delete_mid_node(int fr)
{
    temp=head;
    if(fr==temp->data)
    {
        head=temp->next;
        delete(temp);
        return;
    }
    while(temp->next!=NULL)
    {
        if(fr==temp->next->data)
        {
            temp->next=temp->next->next;
            delete(temp->next);
            break;
        }
        temp=temp->next;

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // Add(nxt()); use it for read input
    Add(4);
    Add(5);
    Add(6);
    Add(7);
    Add(8);

    Delete_first_node();
    Delete_last_node();
    //Delete_mid_node_index(nxt());
    Delete_mid_node(4);
    Display();
    return 0;
}
