#pragma once

#ifndef RANDOM_DEFINED
#define RANDOM_DEFINED

#include <random>

// <Random class>
class Random
{
private:
	std::mt19937 m_mt;
	std::random_device m_randomDevice;


public:

	// <�R���X�g���N�^>
	Random();

	// <int Range(int min, int max)>
	// <min �` max�̃����_���Ȑ��l����>
	int Range(int min, int max);

};


#endif
// <Random class>