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
		printf("1���� �߸��Ǿ���!!\n");
	}

	presult = (double*)swapDouble((double*)NULL, &b);

	if (presult != NULL)
	{
		printf("a = %f, b = %f\n", a, b);
	}
	else
	{
		printf("2���� �߸��Ǿ���!!\n");
	}

	printf("Hello World\n");
	return 0;
}

void* swapDouble(double* pa, double* pb)
{
	// 1. �Է� �� �������� üũ : NULL�� �ƴϿ�����
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