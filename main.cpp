#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	std::cout << "Hi\n";
	std::cout << "Attempting to load image\n";
	bool isImageLoaded = false;


	if (isImageLoaded)
	{
		std::cout << "Successfully loaded image!\n";
	}
	else
	{
		std::cout << "Failed to load image!\n";
	}
	return 0;
}