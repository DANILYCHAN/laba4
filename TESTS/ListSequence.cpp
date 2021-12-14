#include <gtest/gtest.h>
#include "../ListSequence.h"


TEST(ListSequence_float, init){
    ListSequence<float> a{};
    ASSERT_EQ(0, a.GetSize());
}

TEST(ListSequence_float, Get){
    ListSequence<float> a{};
    a.Append(10);
    a.Append(20);
    a.Append(30);
    ASSERT_EQ(20, a.Get(1));
}

TEST(ListSequence_float, Prepend){
    ListSequence<float> a{};
    a.Append(1);
    a.Append(2);
    a.Append(3);
    a.Prepend(10);
    ASSERT_EQ(10, a.Get(0));
}

TEST(ListSequence_float, Set){
    ListSequence<float> a{};
    a.Append(1);
    a.Append(2);
    a.Append(3);
    a.Set(10,1);
    ASSERT_EQ(10, a.Get(1));
}

TEST(ListSequence_float, QuickSort){
    ListSequence<float> a;
    ListSequence<float> *b;
    a.Append(5);
    a.Append(2);
    a.Append(3);
    a.Append(1);
    a.Append(4);
    b = a.QuickSort(&a, Upward);
    ASSERT_EQ(1, b->Get(0));
    ASSERT_EQ(2, b->Get(1));
    ASSERT_EQ(3, b->Get(2));
    ASSERT_EQ(4, b->Get(3));
    ASSERT_EQ(5, b->Get(4));
}

TEST(ListSequence_float, shakerSort){
    ListSequence<float> a;
    ListSequence<float> *b;
    a.Append(5);
    a.Append(2);
    a.Append(3);
    a.Append(1);
    a.Append(4);
    b = a.shakerSort(&a, Downward);
    ASSERT_EQ(1, b->Get(0));
    ASSERT_EQ(2, b->Get(1));
    ASSERT_EQ(3, b->Get(2));
    ASSERT_EQ(4, b->Get(3));
    ASSERT_EQ(5, b->Get(4));
}