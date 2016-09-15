//
// Created by Joshua Weinstein on 9/14/16.
//

#ifndef QUEUEMACHINE_QUEUE_H
#define QUEUEMACHINE_QUEUE_H


class Queue
{
    //node for points in the queue
    struct node
    {
        int i;
        bool b;
        node * next;
        node * prev;
    };

public:
    node front;
    node back;
    int size;

    Queue();
    void pushint(int elem);
    int getnextint();
    bool getnextbool();
    node pop();
};


#endif //QUEUEMACHINE_QUEUE_H
