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


class CBT 
{
    public:
        Node *root; 
        CBT()
        {
            root = NULL; 
        }

        void print()
        {
            queue<Node*> que; 

            que.push(root); 
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

            cout << "\n"; 
        }

        Node* insert(int val)
        {
            if( root == NULL)
            {
                Node *newNode = new Node(val); 
                return newNode;  // root A1
            }
            else 
            {
                queue<Node*> que; 
                Node *newNode = new Node(val); 
            
                que.push(root); 
                while(que.size() != 0)
                {
                    Node *stand = que.front();  // a1
                    que.pop(); 

                    if( stand->leftAdd != NULL)
                    {
                        // its has a left child 
                        que.push(  stand->leftAdd ); 
                    }
                    else 
                    {
                        stand->leftAdd = newNode; 
                        return root; 
                    }


                    if( stand->rightAdd != NULL)
                    {
                        // its has a right child 
                        que.push(  stand->rightAdd ); 
                    }
                    else 
                    {
                        stand->rightAdd = newNode;
                        return root; 
                    }
                }
            }
        }
};

class BST 
{
    public:
        Node *root;
        
        BST()
        {
            root = NULL; 
        }
        
        void print()
        {
            queue<Node*> que; 

            que.push(root); 
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

            cout << "\n"; 
        }
        
        Node* insert(int val, Node *myroot)
        {
            if(myroot == NULL)
            {
                Node *newNode = new Node(val);
                return newNode; 
            }
            // left insert 
            else if(val < myroot->val)
            {
                myroot->leftAdd = 
                    insert(val, myroot->leftAdd); 
            }
            // right insert
            else if(val > myroot->val)
            {
                myroot->rightAdd = 
                    insert(val, myroot->rightAdd); 
            }
            return root; 
        }

        void inOrder(Node *myroot)
        {
            if(myroot != NULL)
            {
                // L
                inOrder(myroot->leftAdd);
                // Ro
                cout << myroot->val <<" "; 
                // R
                inOrder(myroot->rightAdd);
            }
        }
        void preOrder(Node *myroot)
        {
            if(myroot != NULL)
            {
                 // Ro
                cout << myroot->val <<" "; 
                // L
                inOrder(myroot->leftAdd);
                // R
                inOrder(myroot->rightAdd);
            }
        }
        void postOrder(Node *myroot)
        {
            if(myroot != NULL)
            {
                // L
                inOrder(myroot->leftAdd);
                // R
                inOrder(myroot->rightAdd);
                 // Ro
                cout << myroot->val <<" "; 
            }
        }
        int height(Node *myroot)
        {
            if( myroot == NULL )
            {
                return 0; 
            } 

            int leftH = 
                height(myroot->leftAdd); // 0

            
            int rightH = 
                height(myroot->rightAdd); // 0


            if(leftH > rightH)
            {
                return leftH + 1;
            }
            return rightH + 1;
            
            
 
        }

};


void fun(int n)
{
    if(n == 0)
    {
        return; 
    }
    cout << n << " ";
    fun(n - 1);
    cout << n <<" "; 
    // return; 
}

int main()
{
    fun(3);

    BST tree = BST(); 

    tree.root = tree.insert(10, tree.root);  // a10
    //                       10,  NULL
    tree.root = tree.insert(2 , tree.root);
    //                       2, a10 

    tree.root = tree.insert(15); 
    tree.root = tree.insert(7); 
    tree.root = tree.insert(20); 
    tree.root = tree.insert(3); 
    tree.root = tree.insert(15); 


    // CBT tree = CBT(); 
    // tree.root = tree.insert(1); // a1
    // tree.root = tree.insert(2); // a2
    // tree.root = tree.insert(3); 
    // tree.root = tree.insert(4); 
    // tree.root = tree.insert(5); 

    // tree.print();


    // // // Node *obj = (Node*)malloc(   sizeof(Node) );  
    // // // obj->leftAdd = NULL;
    // // // obj->rightAdd = NULL; 
    // // // obj->val = 10; 

    // // Node *a1 = new Node(1);
    // // Node *a2 = new Node(2);
    // // Node *a3 = new Node(3);
    // // Node *a4 = new Node(4); 

    // // a1->leftAdd = a2; 
    // // a1->rightAdd = a3;
    // // a2->leftAdd = a4; 

    // // queue<Node*> que; 

    // // que.push(a1); 
    // // while(que.size() != 0)
    // // {
    // //     Node *stand = que.front();  // a2 
    // //     que.pop(); 

    // //     if( stand->leftAdd != NULL)
    // //     {
    // //         // its has a left child 
    // //         que.push(  stand->leftAdd ); 
    // //     }
    // //     if( stand->rightAdd != NULL)
    // //     {
    // //         // its has a right child 
    // //         que.push(  stand->rightAdd ); 
    // //     }

    // //     cout << stand->val << " "; 
    // //     // print the poped node value

    // // }

    
}
