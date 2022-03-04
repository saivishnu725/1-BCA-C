#include<stdio.h>
int r, cl;
void addmat(int x[][5], int y[][5], int z[][5])
{
		int i, j;
}
int main()
{
		int a[10][10], b[10][10], sum[10][10], diff[10][10],i, j;

		printf("Enter number of rows and columns: ");
		scanf("%d %d", &r, &cl);
		
		printf("Enter %d elements into matrix A: ", (r * cl));
		for(i = 0; i < r; i++)
				for(j = 0; j < cl; j++)
						scanf("%d", &a[i][j]);
		printf("Enter %d elements into matrix B: ", (r * cl));
		for(i = 0; i < r; i++)
				for(j = 0; j < cl; j++)
						scanf("%d", &b[i][j]);

		for(i = 0; i < r; i++)
				for(j = 0; j < cl; j++)
				{
						sum[i][j] = a[i][j] + b[i][j];
						diff[i][j] = a[i][j] - b[i][j];
				}
		
		printf("Sum of two matrices\n");
		for(i = 0; i < r; i++)
		{		for(j = 0; j < cl; j++)
						printf("%d ", sum[i][j]);
				printf("\n");
		}
		printf("Difference of two matrices\n");
		for(i = 0; i < r; i++)
		{
				for(j = 0; j < cl; j++)
						printf("%d ", diff[i][j]);
				printf("\n");
		}

		return 0;
}
