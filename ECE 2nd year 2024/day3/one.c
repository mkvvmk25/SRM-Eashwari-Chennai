#include<stdio.h>

/* 
  to return a value 
  to exit a function block 


 */
void swap(int *a, int *b)
{
  int t =*a;
  *a=*b;
  *b=t;
}
void revArr(int *a, int n) // int *a = arr; a = 1001
{
  int i = 0;
  int j = n - 1;
  while( i < j)
  {
    swap(&a[i], (a + j) );
    i++;
    j--;
  }
}
int sumArr (int *a, int n) 
{
  int sum = 0;
  for (int i = 0; i < n; i++) 
  {
    sum =sum + *(a + i);
  }
  return sum;
}
int sumArr1 ( int n) 
{
  return n + 10;
  printf("hello");
}

int main()
{
  int d = sumArr1(5);
  printf("%d", d);
}
  // int arr[5] = {1, 2, 3, 4, 5};
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%d ", arr[i]);
  // }
  // int x = 10;
  // int y = 20;
  // swap(&x, &y);
  // printf("%d %d", x, y);
  // int a = printf("abc\n");
  // printf("%d\n", a);
  // int b = printf("abc%d-%d\n", a,printf("xyz"));
  // printf("%d", a + b); 