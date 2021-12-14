#include <gtest/gtest.h>
#include "../DynamicArray.h"


TEST(Dynamic_float, init){
    DynamicArray<float> a(3);
    ASSERT_EQ(3, a.GetSize());
}

TEST(Dynamic_float, GetSize){
    DynamicArray<float> a(3);
    ASSERT_EQ(3, a.GetSize());
}

TEST(Dynamic_float, Set){
    DynamicArray<float> a(3);
    a.Set(0,1);
    a.Set(1,2);
    a.Set(2,3);
    a.Set(1, 10);
    ASSERT_EQ(1, a[0]);
    ASSERT_EQ(10, a[1]);
    ASSERT_EQ(3, a[2]);
}

TEST(Dynamic_float, Resize){
    DynamicArray<float> a(3);
    a.Set(0,1);
    a.Set(1,3);
    a.Set(2,100);
    a.Resize(2);
    ASSERT_EQ(1, a[0]);
    ASSERT_EQ(3, a[1]);
    ASSERT_EQ(2, a.GetSize());
}