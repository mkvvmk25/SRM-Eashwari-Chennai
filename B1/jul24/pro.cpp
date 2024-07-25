#include<iostream>
#include<vector>
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

class StackLinkedList
{
    public:
        Node *head;
        Node *tail;
        int length;
     
        StackLinkedList()
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

        bool isEmpty()
        {
            if(head == NULL)
            {
                return true;
            }
            return false; 
        }

        int peekElement()
        {
            if(tail == NULL)
            {
                cout << "stack underFlow!!!";
                return -1;
            }
            return tail->value; 
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



class StackArray
{
public:
    int *stack; 
    int top;
    int stackSize; 

    StackArray(int sz)
    {
        stack = (int*)malloc(sizeof(int) * sz); 
        top = -1; 
        stackSize = sz; 
    }

    bool isEmpty()
    {
        if(top == -1 )
        {
            return true;
        }
        return false;
    }
    
    bool isFull()
    {
        if(top == stackSize - 1 )
        {
            return true;
        }
        return false;
    }

    void push(int val)
    {
        if(isFull() == true)
        {
            cout << "overflow!!!\n";
        }
        else
        {
            top++;
            stack[top] = val; 
        }
    }

    int pop(int val)
    {
        if(isEmpty() == true)
        {
            cout << "underFlow!!!\n";
            return -1;
        }
        else
        {
            int r = stack[top];
            top--;
            return r; 
        }
    }

    int peekElement()
    {
        if(isEmpty())
        {
            cout << "underFlow!!!";
            return -1;
        }
        return stack[top];
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


// infix to post fix 
// h%a+(b-c)*d/e%f



bool validPara(string s)
{
    vector<char> stack;  // ->  (
    // ( ] 
    //   i
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '{' || s[i] == '(' || s[i] == '[' )
        {
            stack.push_back(s[i]); 
        }
        else 
        {
            if( s[i] == ')'  && stack[ stack.size() - 1  ] == '(' )
            {
                stack.pop_back(); 
            }
            else if( s[i] == '}'  && stack[ stack.size() - 1  ] == '{' )
            {
                stack.pop_back(); 
            }
            else if( s[i] == ']'  && stack[ stack.size() - 1  ] == '[' )
            {
                stack.pop_back(); 
            }
            else 
            {
                return false;
            }
        }
    }

    if(stack.size() == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int checkRank(char c)
{
    if(c == '(' ||  c == ')')
    {
        return 3;
    }
    else if(c == '+' ||  c == '-')
    {
        return 1;
    }
    else if(c == '/' ||  c == '%' ||  c == '*' )
    {
        return 2;
    }
    return 0;

}

string infToPost(string s)
{
    // h%a+(b-c)*d/e%f
    // i
    vector<char> stack; // op
    vector<char> post;    // oprands
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a'  && s[i] <= 'z')
        {
            post.push_back(s[i]);
        }
        else 
        {
            if(s[i] == '(')
            {
                stack.push_back(s[i]); 
            }
            else if(s[i] == ')')
            {
                while( stack[stack.size() - 1] != '(') 
                {
                    char chr = stack[stack.size() - 1]; 
                    stack.pop_back(); 
                    post.push_back(chr); 
                }
                stack.pop_back();  // 
            }
            else // + - / * %
            {
                int incChrRank = checkRank(s[i]);
                while(
                    stack.size() != 0 && 
                    stack[stack.size() - 1] != '('  && 
                    incChrRank <= checkRank( stack[stack.size() - 1]) 
                    )
                {
                    char chr = stack[stack.size() - 1]; 
                    stack.pop_back(); 
                    post.push_back(chr); 
                }
                stack.push_back(s[i]); 
            }
        }
    }

    while( stack.size() != 0)
    {
        char chr = stack[stack.size() - 1]; 
        stack.pop_back(); 
        post.push_back(chr); 
    }
    string ans = ""; 
    for(int i = 0; i < post.size(); i++)
    {
        ans = ans + post[i];
    }

    return ans; 
}

int main()
{
    string h = "h%a+(b-c)*d/e%f";
    string ans = infToPost(h);
    cout << ans; 
}

