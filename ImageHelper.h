#ifndef IMAGE_HELPER_H
#define IMAGE_HELPER_H

#include <memory>
#include <opencv2/highgui/highgui.hpp>

// Basic object which displays images
class ImageIllustrator
{
public:
	void ShowImage(std::shared_ptr<cv::Mat> pImage);
};

#endif