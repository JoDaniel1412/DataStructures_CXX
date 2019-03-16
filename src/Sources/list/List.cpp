//
// Created by José Acuña on 15/03/2019.
//

#include <iostream>
#include "../../Headers/list/List.h"

using namespace std;

List::List() = default;;

List::~List() { clean(); };

int List::getHead() {
    return head->getValue();
}

int List::getTail() {
    return tail->getValue();
}

int List::getSize() {
    return List::size;
}

int List::getValue(int index) {
    if (index > size - 1) throw invalid_argument("Index out of range");
    if (index < 0) throw invalid_argument("Index cannot be less than 0");

    Node *node = getNode(index);

    return node->getValue();
}

void List::pushHead(int value) {
    Node *node = new Node(value);

    if (size == 0) head = tail = node;
    else {
        node->setNext(head);
        head->setPrev(node);
        head = node;
    }

    size++;
}

void List::pushTail(int value) {
    Node *node = new Node(value);

    if (size == 0) tail = head = node;
    else {
        node->setPrev(tail);
        tail->setNext(node);
        tail = node;
    }

    size++;
}

void List::printList() {
    Node *node = head;

    while (node) {
        cout << node->getValue() << ", ";
        node = node->getNext();
    }

    cout << '\b' << '\b' << " " << endl; // Overwrites last ','
}

void List::deleteValue(int index) {
    if (index > size - 1) throw invalid_argument("Index out of range");
    if (index < 0) throw invalid_argument("Index cannot be less than 0");

    Node *node = getNode(index);

    // Switch the cnode pointers
    Node* nextNode = node->getNext();
    Node* prevNode = node->getPrev();

    if (index == 0) head = nextNode; // In case the head is deleted
    else prevNode->setNext(nextNode);

    if (index == size - 1) tail = prevNode; // In case the tail is deleted
    else nextNode->setPrev(prevNode);

    delete node;
    size --;
}

void List::clean() {
    Node *node = head;

    while (node) {
        Node *tmp = node;
        node = node->getNext();
        delete tmp;
        size--;
    }

    head = nullptr;
}

Node *List::getNode(int index) {
    Node *node;
    if (index < size/2) { // Search the cnode from the Head
        node = head;
        for (int i = 0; i < index; i++) {
            node = node->getNext();
        }
    }
    else { // Search the cnode from the Tail
        node = tail;
        for (int i = size-1; i > index; i--) {
            node = node->getPrev();
        }
    }
    return node;
}
