#include <gtest/gtest.h>
#include "dw.h"

TEST(PrintReversed, PrintsThreeValuesInReverseOrder) {
    int values[] = {1, 2, 3};
    testing::internal::CaptureStdout();
    print_reversed(values, 3);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "3 2 1 ");
}

TEST(PrintReversed, PrintsSingleValue) {
    int values[] = {7};
    testing::internal::CaptureStdout();
    print_reversed(values, 1);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "7 ");
}
