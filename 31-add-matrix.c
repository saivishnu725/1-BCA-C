#include<stdio.h>
int r, cl;
void addmat(int x[][5], int y[][5], int z[][5])
{
		int i, j;
}
int main()
{
		int a[5][5], i, j;
		printf("Enter number of rows and columns: ");
		scanf("%d %d", &r, &cl);
		printf("Enter %d elements into matrix A: ", (r * cl));
		for(i = 0; i < r; i++)
		{
				for(j = 0; j < cl; j++)
						scanf("%d", &a[i][j]);
		}

		return 0;
}
