#include "version.h"

#include <iostream>

int main(int, char**){
   std::cout << "hello from the second Cmake example! \n";
   std::cout << "Version = " << examples::getVersion() <<  '\n';
   return 0;
}