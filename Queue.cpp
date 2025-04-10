#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() : front(nullptr), rear(nullptr) {}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void Queue::enqueue(double value) {
    QueueNode* newNode = new QueueNode{value, nullptr};
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

double Queue::dequeue() {
    if (isEmpty()) {
        cerr << "Queue is empty!" << endl;
        return -1;
    }
    double value = front->data;
    QueueNode* temp = front;
    front = front->next;
    delete temp;
    if (front == nullptr) {
        rear = nullptr;
    }
    return value;
}

bool Queue::isEmpty() const {
    return front == nullptr;
}
