#include "precomp.h"
#include "ImageHelper.h"

void ImageIllustrator::ShowImage(const std::string& title, std::shared_ptr<cv::Mat> pImage)
{
	cv::imshow(title,*pImage);
	cv::waitKey(0);
}