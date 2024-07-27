#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;

class Node
{
    public:
        Node *leftAdd;
        int val; 
        Node *rightAdd;

        Node(int value)
        {
            val = value; 
            leftAdd = NULL; 
            rightAdd = NULL; 
        }

};


int main()
{
    // Node *obj = (Node*)malloc(   sizeof(Node) );  
    // obj->leftAdd = NULL;
    // obj->rightAdd = NULL; 
    // obj->val = 10; 

    Node *a1 = new Node(1);
    Node *a2 = new Node(2);
    Node *a3 = new Node(3);
    Node *a4 = new Node(4); 

    a1->leftAdd = a2; 
    a1->rightAdd = a3;
    a2->leftAdd = a4; 

    queue<Node*> que; 

    que.push(a1); 
    while(que.size() != 0)
    {
        Node *stand = que.front();  // a2 
        que.pop(); 

        if( stand->leftAdd != NULL)
        {
            // its has a left child 
            que.push(  stand->leftAdd ); 
        }
        if( stand->rightAdd != NULL)
        {
            // its has a right child 
            que.push(  stand->rightAdd ); 
        }

        cout << stand->val << " "; 
        // print the poped node value

    }

    
}
