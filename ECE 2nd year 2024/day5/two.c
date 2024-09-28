#include<stdio.h>

int global = 0;

// void fun(int count) 
// {
//   if (count <= 0) 
//   {
//       return;     
//   }
//   printf("hello ");
//   fun(count - 1);  
// }

// void fun(int n)
// {
//   if (n == 0)
//     return;
//   else
//     printf("hello ");
    
//   fun(n-1);
// }
/* 
  return 
    non-return fun..
      to exit the function stack 
    return fun 
      to exit the function stack with a value 



 */
// void fun()
// {
//   if(global == 3)
//   {
//     return;
//   }
//   global++;
//   printf("helo");
//   fun(); // to college
//   printf("%d",global); // eat breakfast
//   return;
// }
// void fun(int n)
// {
//   fun(n - 1); 
//   return;
// }

// void fun(int n)
// {
//   if(n == 0)
//   {
//     return; 
//   }
//   printf("helo");
//   fun(n - 1); 
//   printf("%d",n);
//   return;
// }

// int fun(int n)
// {
//   if(n == 0)
//   {
//     return 0; 
//   }
//   int a = fun(n - 1); 
//   return a + n;
// }
int fun(int n, int s)
{
  if(n == 0)
  {
    return s; 
  }
  int a = fun(n - 1, n + s);
  return a;
}

// void fibSeries(int n)
// {
//   int f = 0;
//   int s = 1;
//   if(n == 1)
//   {
//     printf("%d", f);
//   }
//   else if(n == 2)
//   {
//     printf("%d", s);
//   }
//   else 
//   {
//     int t;
//     for (int i = 3; i <= n; i++)
//     {  
//       t = f + s; // 1 + 1 = 2
//       f = s; // 1 // 1
//       s = t; // 1 // 2
//     }
//     printf("%d ", t);
//   }

// }
// int fibSeries(int n)
// {
//   int f = 0;
//   int s = 1;
//   if(n == 1)
//   {
//     return f;
//   }
//   else if(n == 2)
//   {
//     return s;
//   }
//   else 
//   {
//     int t;
//     for (int i = 3; i <= n; i++)
//     {  
//       t = f + s; // 1 + 1 = 2
//       f = s; // 1 // 1
//       s = t; // 1 // 2
//     }
//     return t;
//   }
int fibSeries(int n)
{
  int f = 0;
  int s = 1;
  if(n == 1)
  {
    return f;
  }
  else if(n == 2)
  {
    return s;
  }
  else 
  {
    int third = 
      fibSeries(n - 2) + fibSeries(n - 1);
    return third;
  }
}
int main() 
{
  int r = fibSeries(3);
  printf("%d", r);
}