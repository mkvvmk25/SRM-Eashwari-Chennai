#include<iostream>
using namespace std; 

// non return

void fun(string &k)
{
  string ans = ""; 
  int h= k.size(); // 20
  for(int i= h - 1; i >= 0; i--)
  {
    if(k[i] == ' ')
    {
      break; 
    }
    // cout << k[i]; //  c b a
    ans = k[i] + ans;
  }
  cout << ans;
}

void inc(int &a)
{
  a++;
  // a += 1;
  // a = a + 1;
  // ++a;
}

void inc1(int *a)
{
  *a = *a + 1;
}


int main()
{
  
}

    // function are of two types 
    //   return
  // int a = 10;
  // inc1(&a);
  // cout << a;  // 11

  // // string k = "qwerty pot";
  // // // getline(cin,k);
  // // fun(k);

  // // int a = 10;  // 11
  // // int &b = a;
  // // b++; //  a++  
  // // cout << a + b;  

  // // functions 
  
  // /* 
        with para
        without para

        int
        float 
        char*
        .....
      non return 
       with para
        without p
        void

    user def funs 

    pre def funs 
    rec funs 
  
   */

  // string k;
  // string ans = ""; 
  // getline(cin,k);
  // int h= k.size(); // 20
  // for(int i= h - 1; i >= 0; i--)
  // {
  //   if(k[i] == ' ')
  //   {
  //     break; 
  //   }
  //   // cout << k[i]; //  c b a
  //   ans = k[i] + ans;
  // }

  // cout << ans;

  // // string d = "";
  // // d = d + '5';
  // // d = d + '5';
  // // d = d + '5';
  // // cout << d;


  /* 
    1. "qwer asdfg werty zxcvbn abc"
                                  16 17 18 19
    out : "pop"
   */
  // // char a;
  // // char arr[20]; 
  // // char brr[20] = "qwertyabc"; 
  // // char crr[20] = {'a','b','c','\0','1','2'};
  // // int d = strlen(brr);
  // // cout << d;

  // string p;
  // p = "helo";
  // p.append("world");
  // int h = p.size();
  // p = p + "abc";
  // for (int i = 0; i < p.size(); i++)
  // {
  //   cout << p[i] << "*";
  // }
  // getline(cin, p);
  // cout << p;
  // // cout << h; 
