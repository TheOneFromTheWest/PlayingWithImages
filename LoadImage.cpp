#include "precomp.h"
#include "LoadImage.h"

bool ValidateImagePath(const std::string& imageFile)
{
	return false;
}

void ImageLoader::Load(const std::string& imageFile, cv::Mat* pImage)
{
	cv::Mat image; 
	// ValidateImagePath(imageFile);
	std::cout << "Attempting to load image\n";
	try
	{
		image = cv::imread(imageFile, CV_LOAD_IMAGE_GRAYSCALE);
		if (image.data)
		{
			std::cout << "Successfully loaded image!\n";
		}
		else
		{
			std::cout << "Failed to load image!\n	";
			return;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed to load image due to exception!\n	";
		return;
	}

	// Copy loaded image into ptr 
	pImage = &image;
}