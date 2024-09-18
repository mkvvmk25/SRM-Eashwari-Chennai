#include<iostream>

void abc()
{
  std::cout << 52;
}
void abc()
{
  std::cout << 52;
}
namespace class1 
{
  void fun()
  {
    std::cout << "hello11";
  }
}
namespace class2
{
  void fun()
  {
    std::cout << "hello10";
  }
}


int main()
{
  class1::fun();
  class2::fun();
  // abc(); error remove one abc(); 
  std::cout << "hello";
  return 0;
}

// https://tinyurl.com/2arhbdpv 