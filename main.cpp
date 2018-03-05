#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	std::cout << "Hi\n";
	std::cout << "Attempting to load image\n";
	try
	{
		cv::Mat lenaImage = cv::imread("./SampleImages/lena512.bmp", CV_LOAD_IMAGE_GRAYSCALE);
		std::cout << "Successfully loaded image!\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed to load image!\n	";
	}

	return 0;
}