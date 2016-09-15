#include <iostream>
#include "Queue.h"

//main file for QueueMachine VM


int main() {
    std::cout << "Hello, World!" << std::endl;
    Queue a;
    a.pushint(4);
    std::cout << a.getnext() << std::endl;
    return 0;
}