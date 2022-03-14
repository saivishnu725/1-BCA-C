#include <stdio.h>

int main()
{

		int a[10][10], n, i, j, sum = 0;

		printf ("Enter order of the square matrix: ");
		scanf ("%d", &n);
		
		printf ("Enter the matrix of order %d x %d\n", n, n);
		for(i = 0;i < n; i++)
				for(j = 0;j < n; j++)
						scanf("%d", &a[i][j]);

		printf ("The entered matrix: \n");
		for(i = 0;i < n; i++)
		{
				for(j = 0;j < n; j++)
						printf("%d ", a[i][j]);
				printf("\n"); 
		}

		for(i = 0;i < n; i++)
		    sum += a[i][i];
		printf ("Trace of the matrix = %d\n", sum);
}

