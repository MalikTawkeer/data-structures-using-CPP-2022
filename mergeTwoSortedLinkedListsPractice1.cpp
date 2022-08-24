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
    }
};

void insertDataIntoSLL(Node* &head,int data)
{
    Node* tempHead=head;
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        head->next=NULL;
        return;
    }
    while(tempHead->next!=NULL)
    tempHead=tempHead->next;
    
    tempHead->next=newNode;
    newNode->next=NULL;
}

//merge two sorted linked list 
Node* mergeTwoLinkedLists(Node* &head1,Node* head2)
{
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* dummyNode=new Node(NULL);
    Node* ptr3=dummyNode;
    
    if(head1 == NULL && head2==NULL) //if lists not exists
    {
        cout<<"No Linked list exists";
        return NULL;
    } else if(head1==NULL) // if link list-1 does't exixt
    {
        dummyNode->next=head2;
        return dummyNode->next;
    }else if(head2==NULL) //if link list-2 does't exist
    {
        dummyNode->next=head1;
        return dummyNode->next;
    }
    
    // traverse both list-1 and list-2 till NULL encounters
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    //traverse list-1 may be there are still some elements exist and join them at the last of dummy node
    while(ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    while(ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    
    return dummyNode->next;
}

void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    Node* ptr=NULL;
    insertDataIntoSLL(head1,1000);
    insertDataIntoSLL(head1,2000);
    insertDataIntoSLL(head1,3000);
    display(head1);

    insertDataIntoSLL(head2,500);
    insertDataIntoSLL(head2,1500);
    insertDataIntoSLL(head2,2500);
    display(head2);

    ptr=mergeTwoLinkedLists(head1,head2);   
    display(ptr);
}