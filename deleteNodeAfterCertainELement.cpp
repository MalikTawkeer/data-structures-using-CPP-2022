// delete a node after a certain node
#include<iostream>
using namespace std;

class Node
{
    public:
    Node *prev=NULL;
    int data;
    Node *next=NULL;
    Node(int data)
    {
        this->data = data;
    }  
};

//insert node at tail
void insertNodeAtTail(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(tail == NULL)
    {
        head=tail=newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


//delete node after certain node
void delNodeAfterCertainNode(Node *&head,Node *&tail,int nodeLoc)
{
    Node *temp=head;
    int count=1;
    if(head == NULL)
    {
        cout<<"linked list is empty!!"<<endl;
        return;
    }
    while(temp != NULL)
    {
        
        if(count == nodeLoc)
        {
            if(temp->next == NULL)
            {
                delete temp;
                return;
            }
            if(temp->prev == NULL)
            {
                head=head->next;
                head->prev=NULL;
                temp->next=NULL;
                delete temp;
                return;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
        count++;
        temp = temp->next;
    }
}

void display(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
}

int main()
{
    Node *head,*tail;
    head=tail=NULL;
    insertNodeAtTail(head,tail,100);
    insertNodeAtTail(head,tail,200);
    insertNodeAtTail(head,tail,300);
    insertNodeAtTail(head,tail,400);
    insertNodeAtTail(head,tail,500);
    display(head);

    delNodeAfterCertainNode(head,tail,1);
    display(head);
}