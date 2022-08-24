// first program of singly linked list 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(){}
    Node(int data)
    {
        this -> data=data;
        this -> next = NULL;
    }
};
int main()
{
    int data;
    cin>>data;
     Node *n1=new Node(data);
     cout<<n1->data<<endl;
     cout<<n1->next;
}