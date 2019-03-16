//
// Created by José Acuña on 15/03/2019.
//

#ifndef DATASTRUCTURES_CXX_NODE_H
#define DATASTRUCTURES_CXX_NODE_H
#define NULL 0


class Node {

private:
    int value = NULL;
    Node *next = nullptr;
    Node *prev = nullptr;

public:
    Node() = default;

    explicit Node(int value);

    ~Node() = default;

    int getValue() const;

    void setValue(int value);

    Node *getNext() const;

    void setNext(Node *next);

    Node *getPrev() const;

    void setPrev(Node *prev);
};


#endif //DATASTRUCTURES_CXX_NODE_H
