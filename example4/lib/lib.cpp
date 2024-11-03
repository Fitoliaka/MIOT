#include "lib.h"
#include "config.h" 

#include <iostream>

namespace lib {
    int makeSameSupperJob(){
        std::cout << "Hello from lib\n";
        return 42;
    }
    int getVersion(){
        return (PROJECT_VERSION);
    }

}