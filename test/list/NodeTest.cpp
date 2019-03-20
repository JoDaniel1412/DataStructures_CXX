//
// Created by José Acuña on 16/03/2019.
//

#include <gtest/gtest.h>
#include "list/Node.h"

TEST(NodeTest, GetSetValue_Test) {
    Node<int> node = Node<int>(4);

    EXPECT_EQ(node.getValue(), 4);

    node.setValue(6);

    EXPECT_EQ(node.getValue(), 6);
}