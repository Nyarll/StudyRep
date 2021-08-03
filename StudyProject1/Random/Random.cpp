#include "Random.h"

Random::Random()
{
	m_mt.seed(m_randomDevice());
}

int Random::Range(int min, int max)
{
	int result = (m_mt() % ((max + 1) - min)) + min; 
	return result;
}

