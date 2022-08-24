// deletion in singly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(){}
    Node(int data)
    {
        this -> data = data;
    }
};

       //inserting node at the beginning
void insertNodeAtBeginning(Node* &head,int data)
{
    Node* newNode = new Node(data);
    //Node* temp=head;
    newNode -> next = head;
    head = newNode;
}
//delete node by its value
void deleteNodeByNodeValue(Node* &head,int val)
{
    Node* temp = head;
    Node* prevTemp;
    while(temp != NULL)
    {
        prevTemp = temp; //stores previous nodes address
         if(temp -> data == val)
        {
            // prevTemp = temp; //stores previous nodes address
            prevTemp -> next = temp -> next;
            delete temp; 
            break;
        } else{
            cout<<"no element found!!"<<endl;
            break;
        }
        temp = temp -> next;
    }
    cout<<"No element found by value ( "<<val<<" ) in the linked list"<<endl;

}

// Delete node at any specific location
void deleteNodeAtSpecificLocation(Node* &head,int loc)
{
    Node* temp = head;
    Node* prevNode=NULL;
    int locCount=1;

    while(temp != NULL)
    {
        locCount++;
        prevNode = temp;
        if(loc == locCount)
        {
           // prevNode = temp;
            prevNode -> next = temp -> next;
            delete temp;
            break;
        }   
        temp = temp -> next;
    }
}

void printList(Node* &head)
{
    Node* temp=head;
    
    while(temp != NULL)
    {
        cout<<" "<< temp -> data<<endl;
        temp = temp -> next;
    }
}

int main()
{
    Node* head = NULL;
    int deletedVal;
    insertNodeAtBeginning(head,5);
    insertNodeAtBeginning(head,10);
    insertNodeAtBeginning(head,15);
    insertNodeAtBeginning(head,20);
    printList(head);
    
    deleteNodeByNodeValue(head,5);
    printList(head);

    deleteNodeAtSpecificLocation(head,2);
    printList(head);

return 0;
    
}
