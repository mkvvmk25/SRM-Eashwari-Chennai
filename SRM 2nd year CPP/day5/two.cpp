#include<iostream>
#include<vector>
using namespace std;
//               0      0
void traveller(int x, int y, vector<vector<int>> &mat, int row,int  col)
{
  mat[x][y] = 2;

  int xcord[4] = {0, 1, 0 - 1};
  int ycord[4] = {1, 0, -1, 0};

  // lookup in 4 direc
  for (int i = 0; i < 4;i++)
  {
    int nextX = x + xcord[i];
    int nextY = y + ycord[i]; 
    // 0,1 
    if(    (nextX >= 0 && nextX < row ) 
                     && 
           (nextY >= 0 && nextY < col)  
                    &&  
            (mat[nextX][nextY] == 1)    )
    {
      traveller(nextX, nextY, mat, row, col); 
    }

  }
}

int main()
{
  
  int row = 4;
  int col = 4; 
  // int mat[4][4];
  vector<  vector<int>  > mat(row, vector<int>(col));
  int cnt = 0;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> mat[i][j]; 
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if(mat[i][j] == 1)
      {
        cnt++;
        //        0  0  
        traveller(i, j, mat, row, col); 
      }
    }
  }
  
  cout << cnt; 
}
  //   {  {25,25}, 
    //      {25,25} ,
    //      {25,25}   }
  // vector< vector<int> > mat;
  // // vector< vector<int> > mat( rows , how many eles in 1d vec   );
  // vector< vector<int> > mat( 3 , vector<int>(2,25)  );
  // cout << mat[0][1]; 

  // 2d is coll of 1d arr 
  // 2d arr eles are 1d arr 
  // 1d arr eles are int 


  // 2d vec is col id 1d vec 
  // 2d vec els are 1d vec 
  // 1d vec els are int  



  // int arr[5];

  // vector<int> var;
  // vector<int> var1 = vector<int>(5,25);
  // vector<int> var2(5);
  // vector<int> var3;
  // var.push_back(10);
  // var.push_back(11);
  // var.push_back(12);


 // cout << var[3];

 

// struct abc 
// {
//   int a;
//   // self refrential pointer
//   struct abc *nextAdd;   
//   // struct abc pointer var can store address of a struct abc normlal variabke 
//   int *b;
// };

// struct xyz 
// {
//   struct dt 
//   {
//     int a, b;
//   } a1, a2;

//   struct dt b1, b2; 

//   int a;
//   int b;
// };
  // struct xyz var;
  // var.a1.a = 10;
  // var.a1.b = 10;
  // var.a2.a = 10;
  // var.a2.b = 10;
  // var.a = 20;
  // var.b = 30;

  // cout << var.a1.a + var.a1.b;
  // struct abc ram, kiran, tarun, sita, rani;

  // ram.a = 10;
  // ram.nextAdd = &kiran;
  // kiran.a = 20;
  // kiran.nextAdd = &tarun;
  // tarun.a = 30;
  // tarun.nextAdd = &sita;
  // sita.a = 40;
  // sita.nextAdd = &rani;
  // rani.a = 50;
  // rani.nextAdd = nullptr; 
// struct abc 
// {
//   int a;
//   int b;
//   int *c;
// }; 

// struct abc fun()
// {
//   struct abc p;
//   p.a = 10;
//   p.b = 20;
//   return p;
// }
  // // struct abc k = fun();  // k = p  
  // // cout << k.a + k.b;
  // struct abc x, y;
  // x.a = 10;
  // x.b = 20;
  // x.c = new int; // 1001
  // *(x.c) = 25;

  // y = x;
  // x.a = 30;
  // *(x.c) = 100;
  // cout << *(y.c) + y.a + y.b;