// merge two sorted Singly linked lists
/* By ku developers hub
    22/06/2022 , 3:42 PM */

#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(){}
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

//insert elements into a SLL
Node* insertNodeIntoSLL(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
        return head;
    }else if(head->next==NULL)
    {
        head->next=newNode;
        head->next->next=NULL;
        return head;
    }
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
    return head;
}

//merge two sorted singly linked lists
Node* mergeTwoSinglyLinkedLists(Node* &head1,Node* &head2)
{
    Node* ptr1=head1; //ptr1 points to head1
    Node* ptr2=head2; //ptr2 points to head2
    Node* dummyNode=new Node(0);
    Node* ptr3=dummyNode;

    if(head1==NULL)
    {
        dummyNode->next=head2;
        return dummyNode;
    }
    if(head2==NULL)
    {
        dummyNode->next=head1;
        return dummyNode;
    }

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
         ptr3->next=ptr2;
         ptr2=ptr2->next;
        }

        ptr3=ptr3->next;
    }
    //if one list is empty or vice versa
    while (ptr1 != NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }

    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    
    return dummyNode->next;
}


//display elements of linked list
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL \n";
}

int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    Node* mergedHead=NULL;
    insertNodeIntoSLL(head1,100);
    insertNodeIntoSLL(head1,300);
    insertNodeIntoSLL(head1,500);
    insertNodeIntoSLL(head1,700);
    cout<<"linked list -1:- ";
    display(head1);

    insertNodeIntoSLL(head2,200);
    insertNodeIntoSLL(head2,400);
    insertNodeIntoSLL(head2,600);
    insertNodeIntoSLL(head2,800);
    cout<<"linked list -2:- ";
    display(head2);


   mergedHead=mergeTwoSinglyLinkedLists(head1,head2);
   cout<<"Sorted and merged linked list is: ";
   display(mergedHead);

}