#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int val;
  struct node *nextAdd; 
};
typedef struct node Node; 


struct link
{
  Node *head; 
  Node *tail;
  int len;
};
typedef struct link Link; 

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

  Node *newNode = (Node *)malloc(sizeof(Node)); // 5001
  newNode->val = n;
  printf("%d*\n", newNode->val);
  newNode->nextAdd = NULL;

  linkptr->len++;

  // check the list is emt or not ?
  if (linkptr->head == NULL)
  {
    linkptr->head = newNode;
    linkptr->tail = newNode; 
  }
  else 
  {
    printf("%d*\n", linkptr->tail->val);
  
    linkptr->tail->nextAdd = newNode; 
    linkptr->tail = newNode; 
  }
}

void insertBeg(Link *linkptr,  int n)
{
  // create a memory

  Node *newNode = (Node *)malloc(sizeof(Node)); // 5001
  newNode->val = n;
  newNode->nextAdd = NULL;

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
    Node *newNode = (Node *)malloc(sizeof(Node)); // a20
    newNode->val = n;
    newNode->nextAdd = NULL;

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
    linkptr->tail = tem;
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
int main()
{
  struct link link1;

  // struct link *linkptr;
  // linkptr = &link1; 

  link1.head = NULL;
  link1.tail = NULL;
  link1.len = 0; 

  insertEnd(&link1, 10); 
  insertEnd(&link1, 20); 
  insertEnd(&link1, 30);
  printLL(&link1);
  printf("%d\n", link1.len);

  deteleEnd(&link1);
  printLL(&link1);
  printf("--%d\n", link1.len);

  insertMid(&link1, 80, 3); 
  printLL(&link1);
  printf("%d\n", link1.len);


}
  
  // Node *t1 = (Node *)malloc(sizeof(Node));
  // Node *t2 = (Node *)malloc(sizeof(Node));
  // Node *t3 = (Node *)malloc(sizeof(Node));
  // Node *t4 = (Node *)malloc(sizeof(Node));

  // t1->val = 10;
  // t1->nextAdd = t2;

  // t2->val = 20;
  // t2->nextAdd = t3;

  // t3->val = 30;
  // t3->nextAdd = t4;

  // t4->val = 40; 
  // t4->nextAdd = NULL; 

  // Node *head1 = t1 ;
  // Node *tail = t4;

  // printLL(head1); 
  // int a = 5;
  // int a1 = a;
  // int a2 = a1;

  // int *b = &a;
  // int *b1 = b; 
  // int *ptr = (int *)malloc(4);
  // struct node *ptr = (struct node*)malloc(sizeof(struct node));
  // Node *ptr = (Node*)malloc(sizeof(Node));
  // struct node t1;
  // struct node t2;
  // struct node t3;

  // t1.val = 10;
  // t2.val = 20;
  // t3.val = 30;

  // t1.ptr = &t2;
  // t2.ptr = &t3;
  // t3.ptr = NULL;

  // printLL(&t1);
  // int a = t1.val;
  // int b = t1.ptr->val;
  // int c = t1.ptr->ptr->val;



  // printf("%d %d %d ", a, b ,c);
