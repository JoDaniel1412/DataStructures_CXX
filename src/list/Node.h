//
// Created by José Acuña on 16/03/2019.
//

#ifndef DATASTRUCTURES_CXX_NODE_H
#define DATASTRUCTURES_CXX_NODE_H

template<class T>
class Node {

private:
    T value;
    Node<T> *next;
    Node<T> *prev;

public:
    // Constructors

    Node();

    explicit Node(T value);

    Node(T value, Node<T> *next, Node<T> *prev);


    // Methods

    T getValue() const;

    void setValue(T value);

    Node<T> *getNext();

    void setNext(Node<T> *next);

    Node<T> *getPrev();

    void setPrev(Node<T> *prev);

};

#include "Node_impl.h"
#endif //DATASTRUCTURES_CXX_NODE_H
