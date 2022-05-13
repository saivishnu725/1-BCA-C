#include<stdio.h>
void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("Before\tx = %d\ty = %d\n", x, y);
	swap(&x, &y);
	printf("After\tx = %d\ty = %d\n", x, y);

	return 0;
}
