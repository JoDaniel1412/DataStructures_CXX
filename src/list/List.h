//
// Created by José Acuña on 15/03/2019.
//

#ifndef DATASTRUCTURES_CXX_LIST_H
#define DATASTRUCTURES_CXX_LIST_H

#include "Node.h"

template<class T>
class List {

private:
    int size = 0;
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;

public:
    List() = default;

    ~List();

    int value(int index);

    void printList();

    void pushHead(T value);

    void pushTail(T value);

    void deleteValue(int index);

    void clean();

    int getSize();

    int getHead();

    int getTail();

private:
    auto *getNode(int index);

};


#endif //DATASTRUCTURES_CXX_LIST_H
