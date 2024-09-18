// # -> pre processing cammand
#include<iostream>

using namespace std;  
int main()
{

  int f = 0, s = 1, t;

  int n = 6;
  int i = 2;
  cout << f << " " << s << " ";
  while( i < n)
  {
    t = f + s; // 1
    cout << t << " "; 
    f = s;
    s = t;
    i++;
  }

}


  // int a;
  // cin >> a; // 5
  // int r = 0; 
  // while(a != 0)
  // {
  //   r = a + r; // 5 + 2
  //   cin >> a; // 0
  // }
  // cout << r; 
  // do 
  // {
  //   cout << "pop";
  // } 
  // while (1 != 1);
  // int t = 1; // 4
  // while (t <= 2)
  //   cout << "hi " << t++;
  //   t++;

  //   cout << t;
// // entry check loop
//       // check the condition . enter the block 
//       //  for while
//     // exit check loop
//       // do while 
//       //  enter the block check the condition .

//     // for (dec / init; condi..; inc/dec)


//     //                11
//     //                8         10
//     //                5         7
//     //       1        2         4
//     // int r = 0; 
//     int i  = printf("world"); // GV
//     // for ( cout << "hi"; printf("HELO"); cout << "pop" )
//     // {
//     //   cout << "helo"; // 3 6 9
//     // }
//     // for ( cout << "hi"; 4; cout << "pop" )
//     // {
//     //   cout << "helo"; // 3 6 9
//     // }
//     cout << i;