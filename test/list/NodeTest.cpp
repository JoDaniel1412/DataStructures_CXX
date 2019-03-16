//
// Created by José Acuña on 15/03/2019.
//

#include <gtest/gtest.h>
#include "../../src/Headers/list/Node.h"

struct NodeTest : testing::Test {
    Node *node;

    NodeTest() : node(new Node) {}

    ~NodeTest() override {delete node;}
};

TEST_F(NodeTest, GetSetValue_Test) {
    EXPECT_EQ(node->getValue(), NULL);

    node->setValue(3);
    EXPECT_EQ(node->getValue(), 3);

    node->setValue(NULL);
    EXPECT_EQ(node->getValue(), NULL);
}

TEST_F(NodeTest, GetSetNext_GetSetPrev_Test) {
    EXPECT_EQ(node->getNext(), nullptr);
    EXPECT_EQ(node->getPrev(), nullptr);

    // Tests the get and set
    Node *nextNode = new Node(3);
    Node *prevNode = new Node(1);
    node->setNext(nextNode);
    node->setPrev(prevNode);
    EXPECT_EQ(node->getNext(), nextNode);
    EXPECT_EQ(node->getPrev(), prevNode);

    // Tests the value of the next and prev Node
    EXPECT_EQ(node->getNext()->getValue(), 3);
    EXPECT_EQ(node->getPrev()->getValue(), 1);
}