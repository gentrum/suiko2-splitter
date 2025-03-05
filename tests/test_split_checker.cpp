#include <gtest\gtest.h>
#include "../src/split_checker.hpp"

//BGR CHECKER TESTS
TEST(SplitCheckerTests, BGRCheckerSinglePixelTrue){
    cv::Mat image = cv::imread("src/pohlsplittest.png", cv::IMREAD_COLOR);
    EXPECT_TRUE(bgrChecker(image, {{478, 78}}, {{148, 208, 63}}));
}

TEST(SplitCheckerTests, BGRCheckerSinglePixelFalse){
    cv::Mat image = cv::imread("src/pohlsplittest.png", cv::IMREAD_COLOR);
    EXPECT_FALSE(bgrChecker(image, {{478, 78}}, {{0, 0, 0}}));
}