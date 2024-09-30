//
// Created by attam on 29/09/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23039_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23039_FUNCTIONS_H
#include<iostream>
using namespace std;
class Node {
private:
    //members
    int data;
    Node *next;
public:
    // functions
    Node();
    ~Node();
    void setNext(Node* nextNode);
    Node* getNext();
    void setData(int dataValue);
    int getData();
};

class Stack{
private:
    //members
    Node* top;
    int count;
public:
    // functions
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};


class Queue{
private:
    //members
    Node* top;
    Node* bottom;
    int count;
public:
    // functions
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    void printQueue();
};


#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23039_FUNCTIONS_H
