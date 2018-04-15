#include "../MotionModel.h" 
#include <gtest/gtest.h>
//#include <memory>

namespace 
{
	// Simple tests
	// Per-pixel traslation transform 
	TEST(Transform, Simple)
	{
		// todo: replace with point type
		int xy[2] = { 0, 0 };
		// translation model parameters
		int uv[2] = { 1, 1 };
		// expected output
		int wxwy[2] = { 1, 1 };

		TranslationModel m;
		std::shared_ptr<int> warp_xy(new int[2]);/* = */m.Transform(xy, 2, 1, 1);
		EXPECT_EQ(wxwy[0], warp_xy.get()[0]);
		EXPECT_EQ(wxwy[1], warp_xy.get()[1]);
	}
} // namespace

GTEST_API_ int main(int argc, char** argv)
{
	printf("Running tests:\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}	