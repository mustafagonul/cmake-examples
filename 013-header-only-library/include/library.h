#ifndef LIBRARY_H
#define LIBRARY_H


#ifdef __cplusplus
extern "C" {
#endif


void hello_world();


#ifdef __cplusplus
}
#endif

//  Implementation
#include <iostream>

inline void hello_world()
{
  std::cout << "Hello World!" << std::endl;
}


#endif // LIBRARY_H