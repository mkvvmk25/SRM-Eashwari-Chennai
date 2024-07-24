#include<iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node *nextAddress;
        Node(int val)
        {
            value = val;
            nextAddress = NULL;
        }
};

class LinkedList 
{
    public:
        Node *head;
        Node *tail;
        LinkedList()
        {
            head = NULL; 
            tail = NULL; 
        }


        void printLL()
        {
            Node *temp = head;
            while(temp != NULL)
            {
                cout << temp->value <<" "; 
                temp = temp->nextAddress;
            }
        }
 }; 

int main()
{

    // Node *r = (Node*)malloc(  sizeof(Node)  );
    // r->value = 45;


    Node *n1 = new Node(78);
    Node *n2 =new  Node(55);
    Node *n3 =new Node(100);
    Node *n4 =new  Node(78);
    Node *n5 =new Node(95);

    n1->nextAddress = n2;
    n2->nextAddress = n3;
    n3->nextAddress = n4;
    n4->nextAddress = n5;


    LinkedList link1 = LinkedList();
    link1.head = n1;
    link1.printLL();



    
}
