//
// Created by attam on 29/09/2024.
//
#include "functions.h"
int main(){
    Stack myStack;
    Queue myQueue;

    //  stack operations
    cout << "\nPerforming Stack Operations..." << endl;

    cout << "Pushing 10, 20, and 30 onto the Stack." << endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Stack contents after pushes: ";
    myStack.printStack();

    cout << "Peeking top element of Stack: " << myStack.peek() << endl;

    cout << "Popping top element from Stack." << endl;
    myStack.pop();


    cout << "Stack contents after pop: ";
    myStack.printStack();

    cout << "Current size of the Stack: " << myStack.size() << endl;

    // queue operations
    cout << "\nPerforming Queue Operations..." << endl;

    cout << "Enqueueing 100, 200, and 300 to the Queue." << endl;
    myQueue.enqueue(100);
    myQueue.enqueue(200);
    myQueue.enqueue(300);

    cout << "Queue contents after enqueues: ";
    myQueue.printQueue();

    cout << "Dequeuing element from Queue." << endl;
    myQueue.dequeue();

    cout << "Queue contents after dequeue: ";
    myQueue.printQueue();

    cout << "Current size of the Queue: " << myQueue.size() << endl;

    return 0;
}