#include<stdio.h>
void isprime(int n);
int main()
{
		int a;
		printf("Enter the number: ");
		scanf("%d", &a);
		isprime(a);
		return 0;
}

void isprime(int n)
{
		int i, c = 0;
		for(i = 2; i < n; i++)
		{
				if(n % i == 0)
						c++;
		}
		if(c != 0)
				printf("It is not a prime number.\n");
		else
				printf("It is a prime number.\n");
}
