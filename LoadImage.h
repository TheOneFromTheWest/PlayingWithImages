#include <iostream>
#include <string>

#include <opencv2/highgui/highgui.hpp>

// Basic image loading using opencv lib
class ImageLoader
{
public:
	void Load(const std::string& imageFile, cv::Mat* pImage);
};
