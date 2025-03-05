#include "split_checker.hpp"

bool bgrChecker(cv::Mat image, std::vector<std::array<int, 2>> pixels, std::vector<std::array<int, 3>> expectedBRG){
    //for each pixel in the pixel vector chack if its the correct BRG
    for(int i = 0; i < pixels.size(); i++){
        cv::Vec3b* current_row = image.ptr<cv::Vec3b>(pixels[i][0]);
        cv::Vec3b current_pixel = current_row[pixels[i][1]];
        //check the blue channel value
        if((int)(current_pixel[0]) != expectedBRG[i][0]){
            return false;
        }
        //check the green channel value
        if((int)(current_pixel[1]) != expectedBRG[i][1]){
            return false;
        }
        //check the red channel value
        if((int)(current_pixel[2]) != expectedBRG[i][2]){
            return false;
        }
    }

    return true;
}