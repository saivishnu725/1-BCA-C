#include<stdio.h>

void isprime(int n)
{
		int c = 0, i;
		
		for(i = 2; i < n; i++)
				if( n % i == 0)
						c++;
		
		if(c == 0)
				printf("%d is a prime number.\n", n);
		else
				printf("%d is not a prime number.\n", n);
}

int main()
{
		int a;
		
		printf("Enter the number: ");
		scanf("%d", &a);
		
		isprime(a);
		return 0;
}
