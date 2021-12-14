#include <gtest/gtest.h>
#include "../LinkedList.h"


TEST(LinkedList_float, init){
    LinkedList<float> a{};
    ASSERT_EQ(0, a.GetSize());
}

TEST(LinkedList_float, Get){
    LinkedList<float> a{};
    a.Append(1);
    a.Append(2);
    a.Append(3);
    ASSERT_EQ(2, a.Get(1));
}

TEST(LinkedList_float, Prepend){
    LinkedList<float> a{};
    a.Append(1);
    a.Append(2);
    a.Append(3);
    a.Prepend(10);
    ASSERT_EQ(10, a.Get(0));
}
TEST(LinkedList_float, Set){
    LinkedList<float> a{};
    a.Append(1);
    a.Append(2);
    a.Append(3);
    a.Set(10,1);
    ASSERT_EQ(10, a.Get(1));
}