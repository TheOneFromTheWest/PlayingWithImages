#ifndef LOAD_IMAGE_H
#define LOAD_IMAGE_H

#include <string>
#include <memory>
#include <opencv2/highgui/highgui.hpp>

// Basic image loading using opencv lib
class ImageLoader
{
public:
	std::shared_ptr<cv::Mat> Load(const std::string& imageFile);
};

#endif