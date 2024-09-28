#include <stdio.h>
#include <string.h>
#define PI 33121
enum week
{
  MON = 78,
  TUE,
  WED = 32,
  THURS
}; 

struct anc 
{ 
  char n[50]; 
}k;
int main()
{
  // k.n = "qwerty";
  // strcpy(k.n, "qwerty");
  // printf("%s", k.n);
} 
  // union abc p;
  // p.big = 20;
  // printf("%d ", p.big);
  // p.small = 10;
  // printf("%d", p.small);

// struct human 
// {
//   int a;
//   int b;
// };

// // struct human fun()
// // {
// //   struct human t1 = {10,20}; 
// //   struct human t2 = {10,20}; 
// //   struct human c ;
// //   c.a = t1.a + t2.a;  
// //   c.b = t1.b + t2.b;
// //   return c;
// // }
// struct human fun(struct human *t1, struct human *t2)
// { 
//   struct human c ;
//   c.a = t1->a + t2->a; 
//   c.b = t1->b + t2->b;
//   return c;
// }
  // int n = 6;
  // int fh = (n / 2) + 1;
  // int sh = (n / 2);

  // for(int i = 1; i <= fh; i++)
  // {
  //   // space
  //   int numOfspace = fh - i;
  //   for (int sp = 0; sp < numOfspace; sp++)
  //   {
  //     printf(" ");
  //   }

  //   // star
  //   int numOfstar = i;
  //   for (int star = 0; star < numOfstar; star++)
  //   {
  //     printf("* ");
  //   }

  //   printf("\n");
  // }

  // for(int i = 1; i <= sh; i++)
  // {
  //   // space
  //   int numOfspace = i;
  //   for (int sp = 0; sp < numOfspace; sp++)
  //   {
  //     printf(" ");
  //   }

  //   // star
  //   int numOfstar = sh + 1 - i;
  //   // int numOfstar = fh - i;
  //   for (int star = 0; star < numOfstar; star++)
  //   {
  //     printf("* ");
  //   }

  //   printf("\n");
  // }
// struct human
// {
//     int age;
//     float height;
//     char blood_group;
//     int *ptr;
// } ;
  // int x = 25;
  // struct human a = {10,2.5f,'r', &x};
  // // a.ptr = 1001
  // struct human b;
  // // shallow copy 
  // b = a;
  // *a.ptr = 30;
  // *b.ptr = *b.ptr + 5; 
  // printf("%d", x);
  // // printf("%d %c %f", b.age, b.blood_group, b.height);
  // struct human t;
  // t.students[0].roll = 25; 
  // t.age = 10;
  // t.stu1.roll = 10;
  // strcpy(t.stu1.name, "raj");
  // printf("%s", t.stu1.name);
  // shuman raj = {10,2.8f,'t'};
  // shuman *ptr = &raj;
  // shuman **rtr = &ptr;
  // int f = (*rtr)->age;
  // printf("%d", f);
  // // strcpy(kiran.name, "kiran");
  // // printf("%s", kiran.name);
  // char a[50] = "abc\0hi";
  // char b[50] = "abr";
  // int d = strcmp(a, b);
  // printf("%d", d);
  // // char arr[50] = "hello";
  // // char brr[50];
  // // char crr[50] = "abc";
  // // strcat(brr,arr);
  // // strcat(crr,brr);
  // // int d = strlen(arr);
  // // printf("%s\n", arr);
  // // printf("%s\n", brr);
  // // printf("%s\n", crr);
  // //  . dot operator --> mem access op
  // struct human kumar = {12,2.578f, 'p'}; 

  // struct human tarun;
  // // tarun = {1, 2.5f, 'k'};

  // int arr[5];
  // // arr = {12, 5, 6, 7, 8};

  // raj.age = 25;
  // raj.height = 2.35f;
  // raj.bloodgroup = 'a';