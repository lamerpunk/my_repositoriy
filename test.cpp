#include <gtest/gtest.h>
#include "boolean.h"

TEST(MyTest, MyTestFunction) {
    // Тестируемая функция
    bool result = boolean::begin5(1, 2);
    EXPECT_EQ(result, true);
    bool result1 = boolean::begin5(1, -2);
    EXPECT_EQ(result1, true);
}

TEST(MyTest, begin6) {
    // Тестируемая функция
    bool result = boolean::begin6(5, 2, 3);
    EXPECT_EQ(result, true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}