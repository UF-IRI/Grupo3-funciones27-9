#include "gmock/gmock.h"
#include "example.h"

using namespace testing;
TEST(funciones, temperat1)
{
	float *array1_=new float [2];

	array1_[0] = -23.0;
	array1_[1] = 45.0;

	ASSERT_THAT(temperaturaspacientes(array1_), -1);
	delete[] array1_;
}
TEST(funciones, temperat2)
{
	float *array_=new float [2];

	array_[0] = 41.0;
	array_[1] = 36.0;

	ASSERT_THAT(temperaturaspacientes(array_), 2);
	delete[] array_;
}
TEST(funciones, parimpar)
{
	ASSERT_THAT(paroimpar(2, 5), 0);
	ASSERT_THAT(paroimpar(0, 4), 1);
}


