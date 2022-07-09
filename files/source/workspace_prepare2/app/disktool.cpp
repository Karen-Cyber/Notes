#include <iostream>
#include <io.h>

#include "config.h"

// error code
#define PATH_NOT_EXIST -1

int main(int argc, char** argv)
{
    std::cout << "Hello, World\n";
    dummyClass tet(10);
    tet.printData();
    return 0;
}