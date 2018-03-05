#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	std::cout << "Hi\n";
	std::cout << "Attempting to load image\n";
	try
	{
		cv::Mat lenaImage = cv::imread("./SampleImages/lena512.bmp", CV_LOAD_IMAGE_GRAYSCALE);
		if (lenaImage.data)
		{
			std::cout << "Successfully loaded image!\n";
		}
		else
		{
			std::cout << "Failed to load image!\n	";
			return -1;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed to load image due to exception!\n	";
		return -1;
	}

	return 0;
}