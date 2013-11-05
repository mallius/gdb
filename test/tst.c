#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
	static a = 1;

	int sum = 0,i;
	int arr[] = {1,2,3};

	for(i = 0; i < n; i++)
	{
		sum += i;
	}
	
	return sum;
}

void mem(void)
{
	static len = 10;
	int *array = (int *)malloc(len*sizeof(int));
	free(array);
}

int main(void)
{
	int i;
	long result = 0;
	for(i = 1; i <= 100; i++)
	{
		result += i;
	}

	printf("result[1-100] = %d\n", result);
	printf("result[1-250] = %d\n", func(250));
}
