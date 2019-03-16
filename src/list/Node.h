//
// Created by José Acuña on 16/03/2019.
//

#ifndef DATASTRUCTURES_CXX_NODE_H
#define DATASTRUCTURES_CXX_NODE_H

template<class T>
class Node {

private:
    T value = nullptr;
    Node *next = nullptr;
    Node *prev = nullptr;

public:
    T getValue();

    Node *getNext();

    Node *getPrev();
};


#endif //DATASTRUCTURES_CXX_NODE_H
