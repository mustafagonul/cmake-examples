#include <iostream>
#include <boost/filesystem/fstream.hpp>

namespace fs = boost::filesystem;

int main()
{
  fs::ifstream stream("data");

  while (stream) {
    std::string str;
    std::getline(stream, str);
    std::cout << str << std::endl;
  }

  return 0;
}