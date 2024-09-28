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

void printLL(struct node *head)
{
  //    N != N
  while(head != NULL)// 
  {
    printf("%d ", head->val); // 10 20 30
    head=head->nextAdd; // 2001 3001 NULL
  }
}

void insertEnd(Node **head1, Node **tail1, int n)
{
  // create a memory

  Node *newNode = (Node *)malloc(sizeof(Node)); // a20
  newNode->val = n;
  newNode->nextAdd = NULL;

  nodelen++;

  // check the list is emt or not ?
  if (*head1 == NULL)
  {
    *head1 = newNode;
    *tail1 = newNode; 
  }
  else 
  {
    (*tail1)->nextAdd = newNode; 
    *tail1 = newNode; 
  }
}

void insertBeg(Node **head1, Node **tail1, int n)
{
  // create a memory
  Node *newNode = (Node *)malloc(sizeof(Node)); // a20
  newNode->val = n;
  newNode->nextAdd = NULL;

  nodelen++; 

  // check the list is emt or not ?
  if( *head1 == NULL)
  {
    *head1 = newNode;
    *tail1 = newNode; 
  }
  else 
  {
    newNode->nextAdd = *head1; 
    *head1 = newNode; 
  }
}

void insertMid(Node **head1, Node **tail1, int n, int loc)
{
  if(loc== 1)
  {
    insertBeg(head1, tail1, n);
  }
  else if(loc  > nodelen)
  {
    insertEnd(head1, tail1, n);
  }
  else 
  {
    // create a memory
    Node *newNode = (Node *)malloc(sizeof(Node)); // a20
    newNode->val = n;
    newNode->nextAdd = NULL;

    Node *prevAdd;
    Node *currAdd;
    Node *temp = *head1; // a10 
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

    nodelen++;
  }
}

void deteleEnd(struct link *linkptr )
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
  }
  else 
  {
    Node *tem = linkptr->head;
    while(tem->nextAdd->nextAdd != NULL)
    {
      tem = tem->nextAdd; 
    }

    tem->nextAdd = NULL; 
  }
}

// https://github.com/mkvvmk25/SRM-Eashwari-Chennai

int main()
{
  struct link link1;

  // struct link *linkptr;
  // linkptr = &link1; 

  link1.head = NULL;
  link1.tail = NULL;
  link1.len = 0; 
  
  printLL(&link1); 
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