#include <iostream>
#include "split_checker.hpp"

int main(int argc, char const *argv[])
{
    std::string imagePath = "pohlsplittest.png";
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);
    
    std::vector<std::array<int, 2>> pohlPixels = {
        {478, 78},
        {478, 79},
        {478, 80}
    };
    std::vector<std::array<int, 3>> expectedPohl = {
        {148, 208, 63},
        {155, 215, 70},
        {162, 232, 51}
    };
    return 0;
}
