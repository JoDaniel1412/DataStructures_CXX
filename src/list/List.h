//
// Created by José Acuña on 15/03/2019.
//

#ifndef DATASTRUCTURES_CXX_LIST_H
#define DATASTRUCTURES_CXX_LIST_H

#include "Node.h"

template<class T>
class List {

private:
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;
    int size = 0;

public:
    List() = default;

    ~List();

    int value(int index);

    void printList();

    void pushHead(T value);

    void pushTail(T value);

    void deleteValue(int index);

    void clean();

    int getHead();

    int getTail();

    int getSize();

private:
    auto *getNode(int index);

};


#endif //DATASTRUCTURES_CXX_LIST_H
