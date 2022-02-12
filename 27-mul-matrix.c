#include<stdio.h>
int r1, r2, c1, c2;
void mul( int x[][5], int y[][5], int z[][5])
{
		int i,j,k;
		for(i = 0; i < r1; i++)
				for(j = 0; j < c2; j++)
				{
						z[i][j] = 0;
						for( k = 0; k < r1; k++)
								z[i][j] += x[i][k] * y[k][j];
				}
}
int main()
{
		int a[5][5], b[5][5], c[5][5], i, j;
		printf("Enter row and column for matrix 1: ");
		scanf("%d %d", &r1, &c1);
		printf("Enter row and column for matrix 2: ");
		scanf("%d %d", &r2, &c2);
		if(c1 == r2)
		{
				printf("Enter %d elements into matrix 1: ", (r1*c1));
				for( i = 0; i < r1; i++)
					for( j = 0; j < c1; j++)
								scanf("%d", &a[i][j]);
		
				printf("Enter %d elements into matrix 2: ", (r2*c2));
		        for( i = 0; i < r2; i++)
						for( j = 0; j < c2; j++)
								scanf("%d", &b[i][j]);

				mul(a, b, c);
			printf("Multiplied matrix : \n");
			for(i = 0; i < r1; i++)
			{
					for( j = 0; j < c2; j++ )
							printf("%d ", c[i][j]);
					printf("\n");
			}
		}
		else
				printf("Matrix multiplication is not possible.\n");
		return 0;
}
