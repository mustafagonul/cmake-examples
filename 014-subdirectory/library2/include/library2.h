#ifndef LIBRARY2_H
#define LIBRARY2_H


#ifdef __cplusplus
extern "C" {
#endif


void hello_world();


#ifdef __cplusplus
}
#endif

//  Implementation
#include <iostream>

inline void hello_world_2()
{
  std::cout << "Hello World 2 !" << std::endl;
}


#endif // LIBRARY2_H