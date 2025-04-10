#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

void intToBinary(int, Stack&);
void convertDecimalToBinary(double, Queue&);


int main() {
    cout << "Enter a decimal number: ";
    double decimalNumber;
    cin >> decimalNumber;

    int integerPart = static_cast<int>(decimalNumber);
    double decimalPart = decimalNumber - integerPart;

    Stack stack;
    Queue queue;

    intToBinary(integerPart, stack);
    convertDecimalToBinary(decimalPart, queue);

    cout << "Binary representation: ";
    while (!stack.isEmpty()) {
        cout << stack.pop();
    }
    cout << ".";
    while (!queue.isEmpty()) {
        cout << queue.dequeue();
    }
    cout << endl;

    return 0;
}

void intToBinary(int number, Stack& stack) {
    while (number > 0) {
        stack.push(number % 2);
        number /= 2;
    }
}

void convertDecimalToBinary(double number, Queue& queue) {
    while (number > 0) {
        number *= 2;
        int bit = static_cast<int>(number);
        queue.enqueue(bit);
        number -= bit;
    }
}
