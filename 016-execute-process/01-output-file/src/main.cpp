#include <iostream>
#include <fstream>


int main()
{
  std::ifstream stream("data");

  while (stream) {
    std::string str;
    std::getline(stream, str);
    std::cout << str << std::endl;
  }

  return 0;
}