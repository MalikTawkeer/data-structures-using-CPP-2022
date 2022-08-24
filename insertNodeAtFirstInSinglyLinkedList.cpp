//INSERT NODE AT FIRST
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int main()
{
    Node *head=NULL;
    Node *n1=new Node();//node 1
    Node *n2=new Node();//node 2
    Node *n3=new Node();//node 3
    Node *n4=new Node();
    head=n1;//head points to node 1
    head->data=1;
    head->next=n2;

    n2->data=2;
    n2->next=n3;

    n3->data=3;
    n3->next=n4;
    n3->next->data=4;
    n3->next->next=NULL;
    
    //traversing linked list
    while(head != NULL)
    {
        cout<<head->data<<endl;
        cout<<head->next<<endl;
        head=head->next;
    }

}