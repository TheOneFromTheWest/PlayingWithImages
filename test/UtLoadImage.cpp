#include "../LoadImage.h" 
#include "../ImageHelper.h"
#include <gtest/gtest.h>


namespace 
{
	// Simple tests
	TEST(LoadImage, Simple)
	{
		// Cases 
		std::string relativeImagePath = "./data/testImage.bmp";
		std::string nonExistentImagepath = "./data/nonExistentImage.bmp";
		std::string spacesImagePath = "./data/test Image.bmp";

		ImageLoader iml;
		EXPECT_EQ(false, iml.Load(relativeImagePath) == nullptr);
		EXPECT_EQ(true, iml.Load(nonExistentImagepath) == nullptr);	
		EXPECT_EQ(true, iml.Load(spacesImagePath) == nullptr);
	}

	// The basic tests 
	TEST(LoadImage, Base)
	{
		std::string emptyImagePath = "";
		std::string directoryPath = "./data";
		std::string textFilePath = "./data/test.txt";
		// Why don't absolute image paths work?
		std::string absImagePath = "~/Workspace/Learn4Fun/ImageStitching/test/data/testImage.bmp";

		ImageLoader iml;	
		EXPECT_EQ(true, iml.Load(emptyImagePath) == nullptr);
		EXPECT_EQ(true, iml.Load(directoryPath) == nullptr);
		EXPECT_EQ(true, iml.Load(textFilePath) == nullptr);
		EXPECT_EQ(true, iml.Load(absImagePath) == nullptr);
	}

} // namespace

GTEST_API_ int main(int argc, char** argv)
{
	printf("Running tests:\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}