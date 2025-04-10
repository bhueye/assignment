#ifndef STACK_H
#define STACK_H

struct StackNode {
    int data;
    StackNode* next;
};

class Stack {
public:
    Stack();
    ~Stack();
    void push(int value);
    int pop();
    bool isEmpty() const;

private:
    StackNode* top;
};

#endif 
