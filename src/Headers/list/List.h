//
// Created by José Acuña on 15/03/2019.
//

#ifndef DATASTRUCTURES_CXX_LIST_H
#define DATASTRUCTURES_CXX_LIST_H

#include "Node.h"

class List {

private:
    Node *head = nullptr;
    Node *tail = nullptr;
    int size = 0;

public:
    List();

    ~List();

    int getHead();

    int getTail();

    int getSize();

    int getValue(int index);

    void printList();

    void pushHead(int value);

    void pushTail(int value);

    void deleteValue(int index);

    void clean();

private:
    Node* getNode(int index);

};


#endif //DATASTRUCTURES_CXX_LIST_H
