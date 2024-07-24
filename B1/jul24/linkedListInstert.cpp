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
        int length;
    
        LinkedList()
        {
            head = NULL; 
            tail = NULL; 
            length = 0; 
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

        void insertbeg(int val)
        {
            Node *newNode = new Node(val); 
            // Node *newNode = (Node*)malloc(sizeof(Node)); 
            // newNode->value = val;
            // newNode->nextAddress = NULL; 

            if(head == NULL && length == 0)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode->nextAddress = head;
                head = newNode;
            }
            length++;
        }
        
        void insertEnd(int val)
        {
            Node *newNode = new Node(val); 
            // Node *newNode = (Node*)malloc(sizeof(Node)); 
            // newNode->value = val;
            // newNode->nextAddress = NULL; 

            if(head == NULL && length == 0)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->nextAddress = newNode;
                tail = newNode;
            }
            length++;
            
        }

        void insertMid(int val, int pos)
        {
            if(pos <= 1)
            {
                insertbeg(val);
            }
            else if(pos > length)
            {
                insertEnd(val); 
            }
            else 
            {
                Node *befNode;
                Node *aftNode;
                Node *newNode = new Node(val);
                // pos = 3 
                befNode = head; // A1 
                int currPos = 1;
                while(1)
                {
                    //   2 == 2
                    if(currPos == pos - 1)
                    {
                        aftNode = befNode->nextAddress; // A3
                        break;
                    }
                    befNode = befNode->nextAddress; // A2 
                    currPos++; 
                }

                newNode->nextAddress = aftNode; 
                befNode->nextAddress = newNode; 
                length++;
            
            }
        }
}; 

int main()
{
    // instert and delete
        // beg end mid
    LinkedList link1 = LinkedList();
    link1.insertbeg(10);
    link1.insertbeg(20);
    link1.insertbeg(30);
    link1.insertbeg(40);
    link1.insertEnd(50);
    link1.insertEnd(70);
    link1.insertEnd(80);
    link1.insertMid(220, 5);
    link1.insertMid(120, 1);
    link1.insertMid(320, 12);
    link1.printLL();
}