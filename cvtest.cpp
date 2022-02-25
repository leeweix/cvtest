#include <opencv2/highgui.hpp>
#include <iostream>
int main( int argc, char** argv )
{
    cv::Mat src;
    cv::Mat dst = src.clone();
    src = cv::imread("479632_einstein-low-contrast.tif",cv::IMREAD_GRAYSCALE);
    if(!src.data)
        {
            std::cout<<"Could not open file" << std::endl;
            return -1;
        }
    // for (int i = 0; i < src.rows; i++)
    // {
    //     for (int j = 0; j < src.cols; j++)
    //     {
    //             dst.at<uchar>(i, j) = log(1 + src.at<uchar>(i, j));
    //     }
    // }
        // normalize(dst, dst, 0, 255, cv::NORM_MINMAX);
        // convertScaleAbs(dst, dst);
    cv::namedWindow("einstein", cv::WINDOW_AUTOSIZE);
    cv::imshow("einstein", src);
    cv::waitKey(0);
    return 0;
}
