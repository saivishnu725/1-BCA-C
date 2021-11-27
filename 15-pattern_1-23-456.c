#include<stdio.h>
int main()
{
	int i, j, count, num =1;
	printf("Enter the number of lines: ");
	scanf("%d", &count);
	for(i =0; i <= count; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
