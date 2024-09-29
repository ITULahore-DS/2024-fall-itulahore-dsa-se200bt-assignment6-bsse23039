//
// Created by attam on 29/09/2024.
//

#include "functions.h"
// node class implementation
Node::Node() {
    data=0;
    next= nullptr;
}

Node::~Node() {}

void Node::setNext(Node *nextNode) {
    this->next= nextNode;
}

Node *Node::getNext() {return next;}

int Node::getData() {return data;}

void Node::setData(int dataValue) {
    data = dataValue;
}

// stack class implementation
Stack::Stack() {
    top= nullptr;
    count=0;
}

Stack::~Stack() {clear();}

bool Stack::isEmpty() {return count==0;}

void Stack::push(int data) {
    Node* Node1 = new Node; //new node to push at the top of the stack
    Node1->setData(data);
    Node1->setNext(top);
    top = Node1;
    count++;
}

void Stack::pop() {
    if(isEmpty()){
        cout<<"Stack underflow."<<endl;
        return;
    }
    Node* Node1= top; //node to delete from the top
    top=top->getNext();
    delete Node1;
    count--;
}

int Stack::peek() {
    if(isEmpty()){
        cout<<"Stack underflow."<<endl;
        return -1;
    }
    return top->getData();
}

int Stack::size() {return count;}

void Stack::clear() {
    Node* Node1 = top;
    while (Node1 != nullptr) {
        Node* temp = Node1;
        Node1 = Node1->getNext();
        delete temp;
    }
    top = nullptr;
    count = 0;
}

void Stack::printStack() {
    Node* Node1 = top;
    while (Node1 != nullptr) {
        cout << Node1->getData() << " ";
        Node1 = Node1->getNext();
    }
    cout << endl;
}

// queue class implementation
Queue::Queue() {
    top= nullptr;
    count=0;
}

Queue::~Queue() {
    Node* current = top;
    while (current != nullptr) {
        Node* temp = current;
        current = current->getNext();
        delete temp;
    }
}

bool Queue::isEmpty() {return count==0;}

void Queue::enqueue(int data) {
    Node* Node1 = new Node; //new node to enqueue at the top of the queue
    Node1->setData(data);
    if (isEmpty()) {
        top = Node1;
    } else {
        Node* current = top;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(Node1);
    }
    count++;
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout<<"Queue underflow"<<endl;
        return;
    }
    Node* Node1 = top; //node to delete
    top = top->getNext();
    delete Node1;
    count--;
}

int Queue::size() {return count;}

void Queue::printQueue() {
    Node* Node1 = top;
    while (Node1 != nullptr) {
        cout << Node1->getData() << " ";
        Node1 = Node1->getNext();
    }cout << endl;
}