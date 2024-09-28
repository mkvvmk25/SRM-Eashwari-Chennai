#include<stdio.h>
int main()
{
  char arr[50];
  scanf("%s", arr);
  int len = 0; 
  while(arr[len] != '\0')
  {
    len++;
  }

  int i = 0; 
  int j = len - 1;
  int palin = 1; 
  while( i < j )
  {
    // if(arr[i] != arr[j])
    // {
    //   palin = 0; 
    //   break;
    // }
    i++;
    j--;
  }

  if(palin == 0)
  {
    printf("!palin");
  }
  else 
  {
    printf("palin");
  }

  
}
  // for (int i = 0; arr[i] != '\0';i++) // "abc__cbd___re"
  // //                                      i
  // {
  //   if(arr[i] == ' ' && arr[i+1] != ' ')
  //   {
  //     cnt++;
  //   }
  // }

  // printf("%d", cnt + 1); 
  // //               i
  // printf("%d", 'a');
  // // scanf("%s", arr);
  // int i = 0;
  // int al = 0;
  // int digi = 0;
  // int sp = 0;
  // int a = 'a'; // 97
  // // a->97 z->122
  // // A -> 65  Z -> 90 
  // // 0 -> 48 9 -> 57
  // while (arr[i] != '\0')  // "dA"
  // {
  //   if((arr[i] >= 'a' && arr[i] <= 'z')  ||  
  //       (arr[i] >= '65' && arr[i] <= 'Z'))
  //       {
  //         al++;
  //       }

  //       else if((arr[i] >= '0' && arr[i] <= '9'))
  //       {
  //         digi++;
  //       }
  //       else 
  //       {
  //         sp++;
  //       }
  //   // fill the code....😁
  //   i++;
  // }

  // printf("%d %d %d", digi, al, sp);
    // // qwerty\0
    // // 0123456
    // char arr[100];
    // int ind = 0;
    // scanf("%c",&arr[0]);
    // scanf("%c",arr);
    // printf("%c", arr[0]);
    // // while(arr[ind] != '*')
    // // {
    // //   ind++;
    // //   scanf("%c",&arr[ind]); // b *
    // // }
    // // // ind++;
    // // arr[ind] = '\0';
    // // printf("%s", arr);
    // // q\nw\ne\n*
    // return 0;














// int* fun()
// {
//   int *p = (int*)malloc(4);
//   return p; 
// }

// // int pointer fun return a int add 
// // int double pointer fun return a  add of a single pointer  
  // char arr[5]; 
  // char brr[10] = {'a','b', '\0', 'q','w'};
  // char *t = "helloabc"; 
  
  // char crr[10] = "heloabc";
  //   printf("%s\n", t); 
  // // printf("%s", crr); 
  // int arr[2][2] = {1, 2, 3, 4}; 
  // // arr + 1-> 1009
  // printf("%u ", arr);
  // printf("%u ", arr + 1);// 1009 // 1009
  // printf("%u ", *(*(arr + 1) + 1)); // 1009
  // printf("%u ", *(*(arr + 0) + 0)); // 1009
  // printf("%u ", **arr); // 1009

  // // int arr[4] = {1,2,3,4};
  // // // int t = arr[0];
  // // int t = *(arr + 2);
  // // //      1001 + 2 = *(1009)

  // int a = 10;
  // int *b;
  // int **c, ***d, ****e, *****f;
  // b = &a;
  // c = &b;
  // d = &c;
  // e = &d;
  // f = &e;

  // *b = 25; 

  // // int d = *b;
  // ***d = 65 + **c; 
  // int y = *****f;
  // printf("%d", y);

  // // single pointer var can store add of normal var 
  // // double pointer var can store add of single pointer var 
  // // triple pointer var can store add of double pointer var 
  // // ....... 
  // // * -> derefrence op 
  // // & -> addressof / refrence op

  


  // int row = 3, col = 3;
  // int arr[2][2] = {{1,2},{3,4}};
  // printf("%u ", arr + 0); //
  // printf("%u ", &arr + 1); // 
  // // printf("%u ", &arr[0]);  // green
  // // printf("%u ", &arr[0][0]); // grey

  
  // int arr[row][col];
  // for (int i = 0; i < row; i++) // i = 0
  // {
  //   for (int j = 0; j < col; j++) // j = 0, 1 , 2
  //   {
  //     scanf("%d", &arr[i][j]); 
  //   }
  // }

  // int ls = 0, rs = 0;
  // for (int i = 0; i < row; i++)
  // {
  //   ls = ls + arr[i][i];
  //   rs = rs + arr[i][col - 1 - i]; 
  // }
  // printf("%d", ls + rs);
  // // 2d Arrays  or matrix 
  // //  coll of 1d arrays 
  // // many rows many cols

  // // int arr[num of row][num of col];
  // int arr[2][3];
  // int brr[2][3] = {{1,2},{4,5,6}};
  // int crr[2][3] = {1,2,3,4,5};
  // // int drr[][3] = {{1,2,3},{4,5,6}};
  // int grr[][4] = {1,2,3,4,5,6};
  //  int n;
  // scanf("%d", &n);
  // int arr[n]; // {1,2,3,4,5}
  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d ", &arr[i]); 
  // }
  // int i = 0, j = n - 1;

  // while(i < j)
  // // for (    ; i < j; i++, j-- )
  // {
  //   int t = arr[i]; 
  //   arr[i] = arr[j];
  //   arr[j] = t;

  //   i++;
  //   j--;
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", arr[i]); 
  // }
  // // char arr[50] = "uudddduuuuduudddud";
  //  int n;
  //   scanf("%d", &n);
  //   char path[n];    
  //   scanf("%s", path);
  //   int mnt = 0;
  //   int val = 0; 

  //   int count = 0, travel = 0;
    
  //   for (int i = 0; i < n; i++)
  //   {
  //       if (path[i] == 'u')
  //       {
  //           travel += 1;
  //       } else if (path[i] == 'd') {
  //           travel -= 1;
  //       }
        
  //       if (travel == 0) 
  //       {
  //           count += 1;
  //           if(path[i] == 'd')
  //           {
  //             mnt++;
  //           }
  //           else 
  //           {
  //             val++;
  //           }
  //       }
  //   }
    
  //   printf("m-> %d ,v-> %d", mnt, val);
  //   return 0;

