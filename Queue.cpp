//
// Created by Joshua Weinstein on 9/14/16.
//

#include "Queue.h"
#define NULL nullptr

Queue::Queue()
{
    size = 0;
    front = node{};
    back = node{};
}

void Queue::pushint(int elem)
{
    node insert = {elem, NULL, NULL};
    if(size == 0)
    {
        front.next = &insert;
        insert.next = &front;
        insert.prev = &back;
        size++;
    }
    else
    {
        insert.next = front.next;
        front.next = &insert;
        size++;
    }
}
//gets the int at top of the Queue
int Queue::getnextint()
{
    return front.next->i;
}

bool Queue::getnextbool()
{
    return front.next->b;
}

node Queue::pop()
{
    if(size > 1)
    {
        node popped = *front.next;

    }
    return Queue::node();
}









