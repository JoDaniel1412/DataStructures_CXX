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

    T value(int index);

    void printList();

    void pushHead(T value);

    void pushTail(T value);

    void deleteValue(int index);

    void clean();

    int getSize();

    Node<T> *getHead();

    Node<T> *getTail();

private:
    auto *getNode(int index);

};

#include "List_impl.h"

#endif //DATASTRUCTURES_CXX_LIST_H
