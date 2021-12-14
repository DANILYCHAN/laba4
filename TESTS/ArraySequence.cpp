#include <gtest/gtest.h>
#include "../ArraySequence.h"


TEST(ArraySequence_float, init){
ArraySequence<float> a{};
ASSERT_EQ(0, a.GetSize());
}

TEST(ArraySequence_float, Get){
ArraySequence<float> a{};
a.Append(1);
a.Append(2);
a.Append(3);
ASSERT_EQ(2, a.Get(1));
}

TEST(ArraySequence_float, Set){
ArraySequence<float> a{};
a.Append(1);
a.Append(2);
a.Append(3);
a.Set(10,1);
ASSERT_EQ(10, a.Get(1));
}

TEST(ArraySequence_float, Prepend){
ArraySequence<float> a{};
a.Append(1);
a.Append(2);
a.Append(3);
a.Prepend(10);
ASSERT_EQ(10, a.Get(0));
}

TEST(ArraySequence_float, QuickSort){
    ArraySequence<float> a;
    ArraySequence<float> *b;
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

TEST(ArraySequence_float, shakerSort){
    ArraySequence<float> a;
    ArraySequence<float> *b;
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