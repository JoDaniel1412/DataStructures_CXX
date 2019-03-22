//
// Created by José Acuña on 15/03/2019.
//

#ifndef DATASTRUCTURES_CXX_LIST_H
#define DATASTRUCTURES_CXX_LIST_H

#include "list/Node.h"

template<class T>
class List {

public:
    List();

    ~List();

    /**
     * Search for the Object in the index specified
     * @param index position in the list
     * @return the Object in the index
     */
    T value(int index);

    /**
     * Add a value at the beginning of the the list
     * @param value the Object to add
     */
    void pushHead(T value);

    /**
     * Add a value at the end of the the list
     * @param value the Object to add
     */
    void pushTail(T value);

    /**
     * Deletes the Object in certain index
     * @param index the position of the Object to remove
     */
    void remove(int index);

    /**
     * Looks for the first appearance of the Object
     * @param value the Object to search
     * @return the position of the Object and -1 if isn't found
     */
    int index(T value);

    void clean();

    void print();

    int getSize();

    Node<T> *getHead();

    Node<T> *getTail();

    Node<T> *getNode(int index);


private:
    int size;
    Node<T> *head;
    Node<T> *tail;


};

#include "../../src/list/List_impl.h"

#endif //DATASTRUCTURES_CXX_LIST_H
