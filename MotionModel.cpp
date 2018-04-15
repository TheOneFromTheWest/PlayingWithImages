#include "precomp.h"
#include "MotionModel.h"

void TranslationModel::SetParameters(float u, float v)
{
}

void /*std::shared_prt<int>*/ TranslationModel::GetParameters()
{
	std::shared_ptr<int> retZero(new int[2]);
	//retZero[0] = 0;
	//retZero[1] = 0;
	//return retZero;
}

void /*std::shared_prt<int>*/ TranslationModel::Transform(int* xy, uint32_t sizexy, int width, int height)
{
	std::shared_ptr<int> retZero(new int[2]);
	retZero.get()[0] = 0;
	retZero.get()[1] = 0;
	//return retZero;
}
