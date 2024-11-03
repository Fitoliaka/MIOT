#include "config.h"
#include "lib.h"

#include <iostream>

int main(int, char**)
{
   std::cout << "hello from main! \n";
   lib::makeSameSupperJob();
   std::cout << "Lib version: " << lib::getVersion() <<  '\n';
   return 0;

}