#include<stdio.h>
int main()
{
	int i, fact = 1, n;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		fact *= i;
	printf("Factorial of %d is %d\n", n, fact);
	return 0;
}
