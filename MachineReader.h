//
// Created by Joshua Weinstein on 9/15/16.
//
#include "Queue.h"
#ifndef QUEUEMACHINE_MACHINEREADER_H
#define QUEUEMACHINE_MACHINEREADER_H


class MachineReader
{
public:
    Queue backbone;
    char * input;
    MachineReader();
private:
    int count;
};


#endif //QUEUEMACHINE_MACHINEREADER_H
