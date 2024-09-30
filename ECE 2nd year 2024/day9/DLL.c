#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int val;
  struct node *nextAdd; 
  struct node *prevAdd; 

};
typedef struct node Node; 

struct link
{
  Node *head; 
  Node *tail;
  int len;
};

typedef struct link Link; 
/* 
 Node *newNode = (Node *)malloc(sizeof(Node)); // 5001
  newNode->val = n;
  // printf("%d*\n", newNode->val);
  newNode->nextAdd = NULL;

 */

Node* createNode(int n)
{
  Node *newNode = (Node *)malloc(sizeof(Node)); // a1 
  newNode->val = n;
  newNode->nextAdd = NULL;
  newNode->prevAdd = NULL;
  return newNode; // a1
}

void printLL(Link *linkptr)
{
  //    N != N
  Node *tem = linkptr->head;
  while(tem != NULL)// 
  {
    printf("%d ", tem->val); // 10 20 30
    tem=tem->nextAdd; // 2001 3001 NULL
  }
  printf("\n");
}

void insertEnd(Link *linkptr,  int n)
{
  // create a memory
  Node *newNode = createNode(n);
  // create a return fun to create a newnode and store the the value ?

  linkptr->len++;

  // check the list is emt or not ?
  if (linkptr->head == NULL)
  {
    linkptr->head = newNode;
    linkptr->tail = newNode; 
  }
  else 
  {
    // printf("%d*\n", linkptr->tail->val);
    linkptr->tail->nextAdd = newNode; 
    linkptr->tail = newNode; 
  }
}

void insertBeg(Link *linkptr,  int n)
{
  // create a memory

  Node *newNode = createNode(n); 

  linkptr->len++;

  // check the list is emt or not ?
  if (linkptr->head == NULL)
  {
    linkptr->head = newNode;
    linkptr->tail = newNode; 
  }
  else 
  {
    newNode->nextAdd = linkptr->head;
    linkptr->head = newNode; 
  }
}

void insertMid(Link *linkptr, int n, int loc)
{

  // Link *linkptr = &link1

  if(loc== 1)
  {
    insertBeg(linkptr, n);
  }
  else if(loc  > linkptr->len)
  {
    insertEnd(linkptr, n);
  }
  else 
  {
    // create a memory
    Node *newNode = createNode(n); 

    Node *prevAdd;
    Node *currAdd;
    Node *temp = linkptr->head; // a10 
    // loc = 3
    int i = 1; 
    while(temp != NULL)
    {
      if(i == loc - 1) // prevadd 
      {
        prevAdd = temp;
      }
      else if( i == loc)
      {
        currAdd = temp; 
        break;
      }
      i++;
      temp = temp->nextAdd; 
    }

    newNode->nextAdd = currAdd;
    prevAdd->nextAdd = newNode;

    linkptr->len++;
  }
}

void deteleEnd(struct link *linkptr )
{
  if(linkptr->head == NULL)
  {
    printf("no ele \n");
  }
  else if(linkptr->head == linkptr->tail)
  {
    linkptr->head = NULL; 
    linkptr->tail = NULL;
    linkptr->len--;
  }
  else 
  {
    Node *tem = linkptr->head;
    while(tem->nextAdd->nextAdd != NULL)
    {
      tem = tem->nextAdd; 
    }

    tem->nextAdd = NULL;
    linkptr->tail = tem; //update this!!!!👿
    linkptr->len--;
  }
}

void deteleBeg(struct link *linkptr )
{
  // // head link
  // linkptr->head; // 1001
  // linkptr->tail; // 4001
  // linkptr->len // 4

  if(linkptr->head == NULL)
  {
    printf("no ele \n");
  }
  else if(linkptr->head == linkptr->tail)
  {
    linkptr->head = NULL; 
    linkptr->tail = NULL;
    linkptr->len--;
  }
  else 
  {
    Node *tem = linkptr->head;
    linkptr->head = linkptr->head->nextAdd;
    tem->nextAdd = NULL;
  }
}

void deleteMid(Link *linkptr, int loc)
{
  if(loc <= 1) 
  {
    deteleBeg(linkptr); 
  }
  else if(loc >= linkptr->len)
  {
    deteleEnd(linkptr); 
  }
  else 
  {
    Node *prevAdd = linkptr->head; // 1001
    Node *currAdd;
    Node *afterAdd;

    int i = 1; 
    while( i != loc - 1 )
    {
      prevAdd = prevAdd->nextAdd; // 2001
      i++; // 2
    }

    currAdd = prevAdd->nextAdd;  // 3001
    afterAdd = currAdd->nextAdd; // 4001

    prevAdd->nextAdd = afterAdd; 
    currAdd->nextAdd = NULL; 
  }
}

void reverseSLL(Node *head1)
{
  Node *prev = NULL;
  Node *curr = head1;
  Node *next;

  while( curr != NULL )
  {
    next = curr->nextAdd;
    curr->nextAdd = prev;
    prev = curr;
    curr = next;
  }

  Node *tem = prev; 
  while(tem != NULL)
  {
    printf("%d ", tem->val);
    tem = tem->nextAdd; 
  }

  printf("\n");
}

void reverseSLLLinkPtr(Link *linkptr)
{
  Node *prev = NULL;
  Node *curr = linkptr->head;
  Node *next;

  while( curr != NULL )
  {
    next = curr->nextAdd;
    curr->nextAdd = prev;
    prev = curr;
    curr = next;
  }
  linkptr->tail = linkptr->head; 
  linkptr->head = prev;
}

int sameLink(Node *head1, Node *head2)
{
  Node *t1 = head1;
  Node *t2 = head2; 

  while(t1 != NULL &&  
        t2 != NULL &&
        t1->val == t2->val  )
  {
    t1 = t1->nextAdd; 
    t2 = t2->nextAdd; 
  }

  if(t1 == NULL && t2 == NULL)
  {
    return 1;
  }
  else 
  {
    return 0;
  }
}

int main()
{
  Link link1;
  link1.head = NULL;
  link1.tail = NULL;
  link1.len = 0;

  insertEnd(&link1, 10);
  insertEnd(&link1, 20);
  insertEnd(&link1, 30);
  insertEnd(&link1, 40);
  insertEnd(&link1, 50);
  insertEnd(&link1, 60);
  // link1.head = a1
  printLL(&link1);
  reverseSLLLinkPtr(&link1);
  printLL(&link1);
}