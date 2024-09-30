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

void printLL(Link *linkptr, char dir)
{
  //    N != N
  if(dir == 'F' || dir == 'f')
  {
    Node *tem = linkptr->head;
    while(tem != NULL)// 
    {
      printf("%d ", tem->val); // 10 20 30
      tem=tem->nextAdd; // 2001 3001 NULL
    }
    printf("\n");
  }
  else
  {
    Node *tem = linkptr->tail;
    while(tem != NULL)// 
    {
      printf("%d ", tem->val); // 10 20 30
      tem=tem->prevAdd; // 2001 3001 NULL
    }
    printf("\n");
  }
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
    newNode->prevAdd = linkptr->tail; 
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
    linkptr->head->prevAdd = newNode; 
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

    // prev
    currAdd->prevAdd = newNode;
    newNode->prevAdd = prevAdd; 

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
    
    Node *tem = linkptr->tail->prevAdd;
    linkptr->tail->prevAdd = NULL; 
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
    linkptr->head->prevAdd = NULL; 
    linkptr->len--;
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

    afterAdd->prevAdd = prevAdd;
    currAdd->prevAdd = NULL;

    linkptr->len--; 
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
  insertMid(&link1, 100, 3);
  deleteMid(&link1, 4);
  // link1.head = a1
  printLL(&link1, 'f');
  printLL(&link1, 'r');
}