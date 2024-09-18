#include<iostream>
using namespace std;
int main()
{
  int r, c;
  cin >> r >> c; 
  int brr[r][c];
  int lds = 0;
  int rds = 0;

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> brr[i][j]; 

      if( i == j)
      {
        lds = lds + brr[i][j]; 
      }

      if()
      {
        
      }
    }
  }


  for (int i = 0; i < r; i++)
  {
    lds = lds + brr[i][i];

    rds = rds + brr[i][r - 1 - i];
  }

  cout << lds << " " << rds; 

  // int arr[3][3] = {
  //     {1, 2, 3},
  //     {4, 5, 6},
  //     {7, 8, 9}};

  /*
  3 3
  1 2 3
  4 5 6
  7 8 9

  0
  */

}
  // int brr[2][2] = 
  // { {1,2}, {4,5} };
  // /* 
  //   brr + 1 = 1009
  // */
  // cout << brr[0] + 0 << "\n"; 
  // cout << brr[0] + 1 << "\n"; 
  // cout << brr + 0 << "\n"; 
  // cout << brr; 

  // // 1001 8 bytes + 1*4 = 1005
  // // 1001 16bytes 
  // // 2d array 
  // // int arr[rows][cols]; 

  // int arr[2][2];
  // int brr[2][3] = { {1,2,}, {4,5} };
  // int crr[2][3] = { 1,2,3,4,5,6};
  // int drr[][3] = { {1,2,3} ,{4}};
  // // crr[0][2] ?
  // cout << drr[1][0];
  // for (int rot = 0; rot < k; rot++)
  // {
  //   int t = arr[0]; 
  //   for (int i = 0 ; i < n - 1; i++)
  //   {
  //     // i = 4
  //     arr[i] = arr[i + 1]; 
  //   }
  //   arr[n-1] = t; 
  // }
  // // **************
  // int n, k;
  // cin >> n >> k; 
  // int arr[n]; 

  // // get the arr ele
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i]; 
  // }

  // // how to shift
  // for (int rot = 0; rot < k; rot++)
  // {
  //   int t = arr[n - 1]; 
  //   for (int i = n - 1; i > 0; i--)
  //   {
  //     arr[i] = arr[i - 1]; 
  //   }
  //   arr[0] = t; 
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   cout <<  arr[i] << " "; 
  // }
  // constant Time 
  // int brr[5] = {254};
  // int crr[] = {7,8,9,4,6,6};
  // cout << arr;

  // // arr[0] -> *(arr + 0)   // 1001 + 0 * 8 = 1001
  // // arr[] -> *(arr + 1) // 1001 + 1*8 = 1009
  // // 1001 + 2*4 = 1009
  // // 1001 + 3*4 = 1013
  // // 1001 + 4*4 = 1017
  // linear 
  // log
  // int a, b;    //  
  // cin >> a >> b;   // 1
  // cout << a + b;   // 1
  // 1 + 1 + 1 = 3
  //  omega 
  // theta 
  // Big O    --> O(1)

  // int a;    
  // cin >> a;
  // for (int i = 0; i < 10000; i++)
  // {
  //   cout << "abc";
  // }
  //   for (int i = 0; i < a; i++) // 10000
  //   {
  //     cout << "helo";
  //   }


  //logerithmic time 

  // O(10000 + 2)
  // O(10000)
  // O(1)

  // int n = 8;
  // for (int i = 8; i > 1; i = i / 2)
  // {
  //   cout << "helo";
  // }  O(log n)
// https://bit.ly/PA-130924 
// /*
// n = 5  s   st
//   *    2    1     fh - line
//  * *   1    2   
// * * *  0    3
//  * *   1    2
//   *    2    1



//  * *
//   *
// */
// int n = 9; 
// int fh = (n / 2) + 1;
// int sh = n / 2; 

// for(int line = 1; line <= fh; line++)
// {
//   // i got fh lines
//   for (int sp = 1; sp <= (fh - line) ; sp++)
//   {
//     cout << " "; 
//   }
//   for (int star = 1; star <= line ; star++)
//   {
//     cout << "* "; 
//   }

//   cout << "\n";
// }

// int d = 0; 
// for(int line = 1; line <= sh; line++)
// {
//   // i got sh lines
//   for (int sp = 1; sp <= line ; sp++)
//   {
//     cout << " "; 
//   }
//   for (int star = 1; star <= (sh - (line - 1) ) ; star++)
//   {
//     cout << "* "; 
//   }
//   d++;   

//   cout << "\n";
// }