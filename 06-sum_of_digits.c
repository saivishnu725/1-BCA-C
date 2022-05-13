#include <stdio.h>

int main()
{
	int n, num, rev = 0, rem, sum = 0;
    
	printf("Enter a number: ");
	scanf("%d", &n);

	num = n;
	while (num > 0)
	{
		rem = num % 10;
		sum += rem;
		rev = (rev * 10) + rem;
		num /= 10;
	}
	printf("Sum of the digits in %d = %d\n", n, sum);
	printf("Reversed number = %d\n", rev);

	if( rev == n)
		printf("It is a palindrome number.\n");
	else
		printf("It is not a palindrome number.\n");

	return 0;
}
