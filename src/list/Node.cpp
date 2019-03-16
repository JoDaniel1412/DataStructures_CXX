//
// Created by José Acuña on 16/03/2019.
//

#include "Node.h"

template<class T>
T Node<T>::getValue() {
    return value;
}

template<class T>
Node<T> *Node<T>::getNode() {
    return next;
}

template<class T>
Node<T> *Node<T>::getPrev() {
    return prev;
}
