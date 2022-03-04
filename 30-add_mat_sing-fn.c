#include<stdio.h>
int r, c, i, j, a[5][5], b[5][5], sum[5][5];
void read()
{
		printf("Enter the row and column: ");
		scanf("%d %d", &r, &c);
		printf("Enter %d values for Matrix A: ", (c * r));
		for(i = 0; i < r; i++)
		{
				for(j = 0; j < c ; j++)
						scanf("%d", &a[i][j]);
		}
		printf("Enter %d values for Matrix B: ", (c * r));
		for(i = 0; i < r; i++)
		{
				for(j = 0; j < c; j++)
						scanf("%d", &b[i][j]);
		}
}
void add()
{
		for(i = 0; i < r; i++)
		{
				for(j = 0; j < c; j++)
						sum[i][j] = a[i][j] + b[i][j];
		}
}
void display()
{
		printf("Sum of two matrix: \n");
		for(i = 0; i < r; i++)
		{
				for(j = 0; j < c; j++)
						printf("%d ", sum[i][j]);
				printf("\n");
		}
}

int main()
{
		read();
		add();
		display();
		return 0;
}
