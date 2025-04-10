#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

struct QueueNode {
    double data;
    QueueNode* next;
};

class Queue {
public:
    Queue();
    ~Queue();
    void enqueue(double value);
    double dequeue();
    bool isEmpty() const;

private:
    QueueNode* front;
    QueueNode* rear;
};

#endif 
