#ifndef MOTION_MODEL_H
#define MOTION_MODEL_H

#include <memory>

// A 3x3 transformation which operates on image pixels to 
// warp an image in such a way that mimics a particular 
// motion. 
class TranslationModel
{
private: 
	// Parameters
	int m_u;
	int m_v;
public: 
	void SetParameters(float u, float v);
//	std::shared_ptr<int> GetParameters();
//	std::shared_ptr<int> Transform(int* xy, uint32_t sizexy, int width, int height);
	void GetParameters();
	void Transform(int* xy, uint32_t sizexy, int width, int height);
};

#endif