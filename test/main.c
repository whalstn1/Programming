#include <stdio.h>

void* swapDouble(double* pa, double* pb);

int main(void)
{
	double a = 3.14;
	double b = 1.59;

	double* presult = (double*)swapDouble(&a, &b);

	if (presult != NULL)
	{
		printf("a = %f, b = %f\n", a, b);
	}
	else
	{
		printf("1뭔가 잘못되었어!!\n");
	}

	presult = (double*)swapDouble((double*)NULL, &b);

	if (presult != NULL)
	{
		printf("a = %f, b = %f\n", a, b);
	}
	else
	{
		printf("2뭔가 잘못되었어!!\n");
	}

	printf("Hello World\n");
	return 0;
}

void* swapDouble(double* pa, double* pb)
{
	// 1. 입력 값 정상인지 체크 : NULL이 아니여야함
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}

	// 2. swap two values
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	return pa;
}