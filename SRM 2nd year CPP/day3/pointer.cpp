#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std; 
int main()
{
  // void *ptr;
  // ptr = malloc(4);
  // int *b  = (int*)ptr;

  // *b = 25;
  // cout << *b;

  int **p = new int*[3];

  *(p + 0) = new int[5];
  *(p + 1) = new int[5];
  *(p + 2) = new int[5];
  char f;
  cin.getline(f,20);
  cout << f;

  p[0][1] = 25; 


}

  //   *(p + 0) = 56;
  //   *(p + 1) = 25;
  //   p[2] = 65;
  //   *(p + 2) = 65;
  //   cout << *p;
  // }



  // int arr[5] = {1, 2, 3, 4, 5};
  // cout << arr[0] << endl;
  // cout << *(arr + 0) << "\n";
  // cout << *(arr + 1)<< "\n";
  // cout << *(arr + 2)<< "\n";
// {
//   int a = 10;
//   int *b = &a;
//   int **c = &b;
//   int ***d = &c;
//   int ****e = &d;
//   int *****g = &e;

//   int f = *****g;
//   cout << f;
//   /* 
//       f = *(*2001)
//       f = *(1001)
//       f = 10
//    */
  // // void d;
  // // void *p;
  // int a = 10;
  // // integer variable
  // // stores a integer value
  // int *b;
  // b = &a; // b = 1001

  // int **c = &b;  // c=1001

  // int f = *b;

  // int d = **c; 
  // cout << d;
  // // *b -> *1001 
  // //rhs --> go to address get the value

  // // pointer var stores add as a value
  // // integer single pointer variable

  // // single pointer var can store a the address of a normal variable 
  // // double pointer var can store a the address of a single pointer variable 
  // // triple pointer var can store a the address of a double  pointer variable 
  // // four pointer var can store a the address of a triple  pointer variable

   