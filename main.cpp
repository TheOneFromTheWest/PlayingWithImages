#include "precomp.h"
#include "LoadImage.h" 
#include "ImageHelper.h"

int main()
{
	std::cout << "Hi\n";
	ImageLoader imLoader;
	std::shared_ptr<cv::Mat> pLenaImage = imLoader.Load("./SampleImages/lena512.bmp");
	if (!pLenaImage->data)
	{
		std::cout << "Failed to load lena512!\n";
		return 1;
	}
	else
	{
		std::cout << "Loaded lena512!\n";
	}

	ImageIllustrator imHelper;
	imHelper.ShowImage("Lena!", pLenaImage);	



	return 0;
}