#include<iostream>
using namespace std;
int kop = 45;
struct abc 
{
  int a;
  float b;
  char t;
  int c;
}  a1, a2;

struct abc b1, b2;

// typedef struct abc mydataType;
typedef unsigned long int uli; 
uli var = 2545184514;

// byte k; 

// long int -> -2^63ve 0 + 2^63ve 
// unsigned long int -> 0   2^63 - 1 +ve 
// struct padding...
// member accessing opr (   .    ) and (   ->    )
// int main()
// {
//   // mydataType pop{48,5.6f,'5',56};
//   // struct abc *ptr;
//   // ptr = &pop;
//   // cout << ptr->a;
//   // 32768
//   short k;
//   k = 32769;
//   //  -32768 -32767 -32766 
//   // -2^15 to +(2^15 - 1) 
//   cout << k;
// }