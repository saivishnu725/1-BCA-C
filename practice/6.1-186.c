#include<stdio.h>
int main()
{
	int i, reverse = 0, rem, num, n;
	printf("Enter a number: ");
	scanf("%d", &num);
	n = num;
	while( n > 0 )
	{
		rem = n % 10;
		reverse = rem + (reverse * 10);
		n /= 10;
	}
	printf("Reverse of %d is %d\n", num, reverse);
	return 0;
}
