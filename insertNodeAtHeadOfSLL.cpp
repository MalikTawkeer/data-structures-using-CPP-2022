//  INSERTING A NODE AT THE BEGGNING
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
        this -> data = data;
    }
};

 //inserting node at th beginning
void insertNodeAtBeginning(Node* &head,int data)
{
    Node* newNode = new Node(data);
    //Node* temp=head;
    newNode -> next = head;
    head = newNode;
}

        //inserting node at th last
void insertNodeAtTheTail(Node* &head , int data)
{
    Node* temp=head;
    Node* prev;
    while(temp != NULL)
    {
        prev = temp;
        temp = temp -> next;
    }
    Node* newNode=new Node(data);
    prev -> next = newNode;
    newNode -> next = NULL;

}

// insert a node at any specific location
void insertNodeAtSpecificLocation(Node* &head)
{
    int data,loc,count=0;
    Node* temp=head;
    Node* temp1=NULL;
    cout<<"Enter a data"<<endl;
    cin>> data;
    //new node
    Node* newNode = new Node(data);
    cout<<"Enter a location at which you want to insert a node:- \t";
    cin>> loc;
    while(temp != NULL)
    {
        count ++;
        if(loc == count)
        {
            if(temp -> next == NULL)
            {
                temp1 = temp;
                break;
            }
            temp1 = temp -> next; // put the address of next node into temp1
            temp -> next = newNode; // put the address of newNODE INTO  a temp
            newNode -> next = temp1; // put the address of temp1 into the next of newNode
        }
        temp = temp -> next;
    }
}

// insert a node at any given value
void insertNodeAtAnyGivenValue(Node* head)
{
    Node* temp = head, *temp1 = NULL;
    int value, data;
    cout<<"\n Enter a value at which you want to insert a new data:-"<<endl;
    cin>> value;
    cout<<"Enter a new data"<<endl;
    cin>>data;

    while(temp != NULL)
    {
        if(temp -> data == value)
        {
            Node* newNode = new Node(data); // create new node
            temp1 = temp -> next; // store address of next node comes after current temp node 
            temp -> next = newNode; // 
            newNode -> next = temp1;
        }
        temp = temp -> next;
    }
}
    // method to calculate size of  linked list
int sizeOfLinkedList(Node* &head)
{
    int size=0;
    Node* temp=head; 
    while(temp != NULL)
    {
        size++;
        temp = temp -> next;
    }
  
    return size;
}

int sumOfSll(Node* &head)
{
    Node* temp = head;
    int sum = 0;
    while(temp != NULL)
    {
        sum = sum + temp -> data;
        temp = temp -> next;
    }
    return sum;

}

//mean
int meanOfSll(Node* &head)
{
    int size, sum, mean;
    size = sizeOfLinkedList(head);
    sum = sumOfSll(head);
    mean = sum / size;

    return mean;
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
    Node* head=NULL;
    int sizeOfSll,mean=0,sum=0;
    cout<<"add at first"<<endl;
    insertNodeAtBeginning(head,100);
    insertNodeAtBeginning(head,90);
    insertNodeAtBeginning(head,80);
    insertNodeAtBeginning(head,70);
    insertNodeAtBeginning(head,60);
    
    cout<<"add at last.."<<endl;
    insertNodeAtTheTail(head,50);
    insertNodeAtTheTail(head,40);
    sizeOfLinkedList(head);
    cout<<"Display linked list:"<<endl;
    printList(head);

    cout<<"add at specific location:"<<endl;
    insertNodeAtSpecificLocation(head);  
    printList(head);

    insertNodeAtAnyGivenValue(head);
    printList(head);
    /*
    sizeOfSll = sizeOfLinkedList(head);
    cout<<"\n SIZE OF LINKED LIST :-"<<sizeOfSll<<endl;

    sum = sumOfSll(head);
    // DISPLAYING SUM OF ELEMENTS OF LINKED LIST
    cout<<"\n SUM OF LINKED LIST="<<sum<<endl;

    mean = meanOfSll(head);
    cout<<"ARITHMETIC MEAN OF LINKD LIST ="<<mean<<endl;
    */
}