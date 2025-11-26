#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void display(struct node* head)
{
    struct node* temp=head;

    while(temp!= NULL)
    {
        cout<<temp->data <<" is at memory location "<<temp<<" and next node is at position "<<temp->next<<"\n";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    struct node *head, *second, *third;

    head= new node;
    second= new node;
    third= new node;

    head->data=10;
    second->data=20;
    third->data=30;

    head->next=second;
    second->next=third;
    third->next=NULL;

    display(head);

    return 0;

}
