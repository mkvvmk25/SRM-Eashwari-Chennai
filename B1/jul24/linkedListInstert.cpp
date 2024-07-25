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
            cout << "\n";
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

        int deleteMid(int val, int pos)
        {
            if(pos <= 1)
            {
                return deleteBeg();
            }
            else if(pos >= length)
            {
                return deleteEnd(); 
            }
            else 
            {
                Node *befNode; // A2
                Node *aftNode; // A4
                Node *posNode; // A3
                // pos = 3 
                befNode = head; // A1 
                int currPos = 1;
                while(1)
                {
                    //   2 == 2
                    if(currPos == pos - 1)
                    {
                        posNode = befNode->nextAddress;  
                        aftNode = befNode->nextAddress->nextAddress; // A3
                        break;
                    }
                    befNode = befNode->nextAddress; // A2 
                    currPos++; 
                }

                befNode->nextAddress = aftNode; 
                posNode->nextAddress = NULL; 
                length--;
                return posNode->value;
            }
            return -1;
        }

        int deleteBeg()
        {
            if(head == NULL)
            {
                cout << " NO ELE to DEL!!!" <<"\n";
            }
            else if(head == tail)
            {
                // one ele 
                Node *t = head;
                head = NULL;
                tail = NULL; 
                length--;
                return t->value; 
                
            }
            else 
            {
                length--;
                Node *t = head;
                head = head ->nextAddress; // A2 
                t->nextAddress = NULL;
                return t->value; 
            }
            return -1; 
        }

        int deleteEnd()
        {
            if(head == NULL)
            {
                cout << " NO ELE to DEL!!!" <<"\n";
            }
            else if(head == tail)
            {
                // one ele 
                Node *t = head;
                head = NULL;
                tail = NULL; 
                length--;
                return t->value; 
                
            }
            else 
            {
                
                Node *t = head; // A1
                while(t->nextAddress != tail )
                {
                    t = t->nextAddress;  // A3->ne->ne
                }
                Node *ln = tail; 
                t->nextAddress = NULL; 
                tail = t;
                length--;
                return ln->value;
            }
            return -1; 
        }
}; 

class CircullarLinkedList
{
    public:
        Node *head;
        Node *tail;
        int length;
     
        CircullarLinkedList()
        {
            head = NULL; 
            tail = NULL; 
            length = 0; 
        }

        void printCLL()
        {
            Node *temp = head;
            while(temp != tail)
            {
                cout << temp->value <<" "; 
                temp = temp->nextAddress;
            }
            cout << temp->value <<" "; 
            cout << "\n";
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
                tail->nextAddress = head; 
            }
            else
            {
                newNode->nextAddress = head; 
                tail->nextAddress= newNode;
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
                newNode->nextAddress = head; 
                tail->nextAddress= newNode;
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

        int deleteMid(int val, int pos)
        {
            if(pos <= 1)
            {
                return deleteBeg();
            }
            else if(pos >= length)
            {
                return deleteEnd(); 
            }
            else 
            {
                Node *befNode; // A2
                Node *aftNode; // A4
                Node *posNode; // A3
                // pos = 3 
                befNode = head; // A1 
                int currPos = 1;
                while(1)
                {
                    //   2 == 2
                    if(currPos == pos - 1)
                    {
                        posNode = befNode->nextAddress;  
                        aftNode = befNode->nextAddress->nextAddress; // A3
                        break;
                    }
                    befNode = befNode->nextAddress; // A2 
                    currPos++; 
                }

                befNode->nextAddress = aftNode; 
                posNode->nextAddress = NULL; 
                length--;
                return posNode->value;
            }
            return -1;
        }

        int deleteBeg()
        {
            if(head == NULL)
            {
                cout << " NO ELE to DEL!!!" <<"\n";
            }
            else if(head == tail)
            {
                // one ele 
                Node *t = head;
                head = NULL;
                tail = NULL; 
                length--;
                return t->value; 
                
            }
            else 
            {
                length--;
                Node *t = head;
                tail->nextAddress = head->nextAddress; 
                head->nextAddress = NULL; 
                head = tail->nextAddress; 
                return t->value; 
            }
            return -1; 
        }

        int deleteEnd()
        {
            if(head == NULL)
            {
                cout << " NO ELE to DEL!!!" <<"\n";
            }
            else if(head == tail)
            {
                // one ele 
                Node *t = head;
                head = NULL;
                tail = NULL; 
                length--;
                return t->value; 
                
            }
            else 
            {
                
                Node *t = head; // A1
                while(t->nextAddress != tail ) 
                {
                    t = t->nextAddress;  // A3->ne->ne
                }
                Node *ln = tail; 
                t->nextAddress = head; 
                tail->nextAddress = NULL;
                tail = t; 
                length--;
                return ln->value;
            }
            return -1; 
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
    link1.deleteEnd();
    link1.deleteEnd();
    link1.deleteEnd();
    link1.printLL();
}

