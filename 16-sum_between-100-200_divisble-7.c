#include<stdio.h>
int main()
{
	int i, sum =0;
	for(i =100; i <= 200; i++)
	{
		if( i % 7 == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nSum = %d\n", sum);
	return 0;
}
