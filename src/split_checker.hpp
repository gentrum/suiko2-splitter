#ifndef SPLITCHECKER_HPP
#define SPLITCHECKER_HPP

#include <opencv2/opencv.hpp>
bool bgrChecker(cv::Mat image, std::vector<std::array<int, 2>> pixels, std::vector<std::array<int, 3>> expectedBRG);

#endif