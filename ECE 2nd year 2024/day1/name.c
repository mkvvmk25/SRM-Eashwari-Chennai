#include<stdio.h> 
int main()
{
  int n;
  scanf("%d", &n);
  int drr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &drr[i]);
  }
  int firstlarge = drr[0];
  int secondlarge = drr[1];

  if(firstlarge < secondlarge)
  {
    firstlarge = drr[1];
    secondlarge = drr[0];
  }

  for (int i = 2; i < n; i++)
  {
    if(firstlarge < drr[i] )
    {
      secondlarge = firstlarge; 
      firstlarge = drr[i];
    }
    else if(secondlarge < drr[i])
    {
      secondlarge = drr[i]; 
    }
  }
}
  /* 
  // int arr[3];
  // int brr[3] = {1,2,3};
  // int drr[] = {1,2};
  // char crr[3] = {'a','p'};
  // printf("%d", crr[0]); 
      crr[0]
      -> crr + 0
      -> 1001 + 0 * 1 = 1001
      -> 1001 + 1 * 1 = 1002
      -> 1001 + 2 * 1 = 1003
   */
  // int n = 8; // ui
  // scanf("%d", &n); 
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j < n; j = j * 2)
  //   {
  //     printf("helo"); 
  //     printf("helo"); 
  //     printf("helo"); 
  //     printf("helo"); 
  //     printf("helo"); 
  //     printf("helo"); 
  //   }
  // }
  // int a = 1;
  // do
  // {
  //   printf("helo %d ",a--);
  // } 
  // while (a);
  // a--;
  // printf("hi %d ", a);
  // // for (dec / init; condition; inc/decre)
  // int i = 1;
  // for (printf("1"); 0 ; printf("3") )
  // {
  //   printf("2");
  //   i++;
  // }
  // printf("%d", i);
  /* 
    entry check loop
      check the condition and enter block
      for 
      while   
    exit check loop 
      enter block   and check the condition 
      do while 
   */
  // // char a = 'a';
  // int y = 93;
  // switch('e')
  // {
  //   case 97:
  //     printf("1");
  //     break;
  //   default:
  //     printf("4");
  //   case 'c':
  //     printf("2");
  //     break;
  //   case 98:
  //     printf("3");
  //     break;
  // }
  // int a = 0;
  // if(0);
  // if(!a)
  //   if(1) 
  //     printf("2");
  //   else 
  //     a = 5;
  // else
  //   printf("0");
  // if(a) 
  //   if(0);
  //   else 
  //     printf("1");
  // int a = 5;   // 5
  // int b = ++a; // 5
  // int c = --a; // 4
  // int d = c--; // 6
  // int e = d++; // 5
  // int f = b--; // 6
  // printf("%d",a+b+c+d+e+f);

  /* 
    opr
      ternary 
        a ? b : c 
      unary
        logical not
        bitwise not
        -
        +
        inc/dec 
          ++ -- 
        ++
        --

      binary
        arthe
          + - / % *
        logi
          && || !
        rel
          < > <= >= != ==
        bitwise 
          & | ~ ^ << >> 
        assign..
          = += -= 
          a =(bin op) b
   */
// int a;
// // short c = 32767; 
// short c = 32770; 

// // -2^15  to  +(2^15 - 1) 
// // -2^31  to  +(2^31 - 1) 
// // -2^63  to  +(2^63 - 1) 

// // declaration ????
// printf("%d", c);