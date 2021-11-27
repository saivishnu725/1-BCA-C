#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the number of lines: ");
	scanf("%d", &n);
	for(i  = 1; i <= n; i++)
	{
		for( j = 1; j <= i ;j++)
			printf("%d ", i);
		printf("\n");
	}
	return 0;
}

// o/p
// Enter the number of lines: 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
