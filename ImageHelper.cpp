#include "precomp.h"
#include "ImageHelper.h"

void ImageIllustrator::ShowImage(std::shared_ptr<cv::Mat> pImage)
{
	cv::imshow("Lena!",*pImage);
	cv::waitKey(0);
}