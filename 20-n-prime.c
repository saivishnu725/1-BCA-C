#include<stdio.h>
int main()
{
		int n,i,j, count;
		printf("Enter the number: ");
		scanf("%d", &n);
		printf("Prime numbers between 2 and %d are:\t",n);
		for(i=2;i<=n;i++)
		{
				count = 0;
				for(j=2;j<i;j++)
				{
						if( i % j == 0)
								count++;
				}
				if(count == 0)
						printf("%d\t",i);
		}
		printf("\n");
		return 0;
}
