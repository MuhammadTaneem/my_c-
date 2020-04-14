#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)
int nxt()
{
    int z;
    cin>>z;
    return z;
}

struct node{

    int data;
    node *next=NULL;
    node *prev=NULL;
};

node *head,*last,*mv,*temp;


///add value in last
void add_last(int x)
{
    node *crnode = new node;
    crnode->data=x;
    if(head==NULL)
    {
        head=crnode;
        last=crnode;
        return;
    }
    crnode->prev=last;
    last->next=crnode;
    last=crnode;


}


///ading
void adding(int n)
{
    fr(n)add_last(nxt());

}

//display link list
void Display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl;

}


///display in revese order
void Rdisplay()
{
    temp=last;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;

}

//serch in link list
void serch(int x)
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            cout<<"found"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not found"<<endl;
}


/// add first
void add_first(int x)
{
    node *crnode = new node;
    crnode->data=x;
    if(head==NULL)
    {
        head=crnode;
        last=crnode;
        return;
    }
    head->prev=crnode;
    crnode->next=head;
    head=crnode;


}


///add in after given value
void add_mid(int x)
{
    temp=head;
    while(temp!=NULL)
    {


        if(temp->data==x)
        {
            if(head==temp)
            {
                add_first(nxt());
                return;
            }

            if(temp==last)
            {
                add_last(nxt());
                return;
            }
            node * crnode = new node;
            crnode->data=nxt();
            crnode->prev=temp;
            crnode->next=temp->next;
            temp->next=crnode;
            crnode->next->prev=crnode;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not found"<<endl;


}

///delete  first item
void delete_first()
{
    temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);

}

/// delete last item
void delete_last()
{
    temp=last;
    last=last->prev;
    last->next=NULL;
    delete(temp);

}

///delete from any index
void delete_midd(int x)
{
    temp=head;
    if(temp->data==x)
    {
        delete_first();
        return;
    }
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            if(temp==last)
            {
               delete_last();
               return;

            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete(temp);
            return;

        }
        temp=temp->next;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //adding(2);
    //add_first(12);
    //add_first(122);
    //adding(2);
    //add_last(88);
    //add_mid(45);
    //delete_first();
    //delete_last();
    //delete_midd(88);
    //Display();
    //Rdisplay();
    //serch(88);
    //serch(36);
    return 0;
}
