#include <iostream>

int main()
{
#ifdef HELLO_WORLD
  std::cout << "Hello World Defined!" << std::endl;
#else
  std::cout << "Hello World Not Defined!" << std::endl;
#endif
  
  return 0;
}