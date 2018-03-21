#include "precomp.h"
#include "LoadImage.h" 

int main()
{
	std::cout << "Hi\n";
	ImageLoader imLoader;
	cv::Mat* pLenaImage;
	imLoader.Load("./SampleImages/lena512.bmp", pLenaImage);
	if (!pLenaImage->data)
	{
		std::cout << "Failed to load lena512!\n";
		return 1;
	}
	else
	{
		std::cout << "Loaded lena512!\n";
	}

		return 0;
}