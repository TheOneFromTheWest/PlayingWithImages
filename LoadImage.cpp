#include "precomp.h"
#include "LoadImage.h"

/*
bool ValidateImagePath(const std::string& imageFile)
{
	return false;
}
*/

std::shared_ptr<cv::Mat> ImageLoader::Load(const std::string& imageFile)
{
	cv::Mat image; 
	// ValidateImagePath(imageFile);
	std::cout << "Attempting to load image\n";
	try
	{
		image = cv::imread(imageFile, CV_LOAD_IMAGE_GRAYSCALE);
		if (image.data)
		{
			std::cout << "Successfully loaded image '" << imageFile.c_str() << "'!\n";
		}
		else
		{
			std::cout << "Failed to load image '" << imageFile.c_str() << "'!\n";
			return nullptr;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed to load image '" << imageFile.c_str() << "' due to exception!\n";
		return nullptr;
	}

	// Copy loaded image into ptr 
	std::shared_ptr<cv::Mat> pImage;
	pImage.reset(new cv::Mat(image));
	return pImage;
}