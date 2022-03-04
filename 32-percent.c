#include<stdio.h>
int main()
{
		int avg;
		
		printf("Enter the value: ");
		scanf("%d", &avg);

		if(avg >= 80)
				printf("Distinction.\n");
		else if(avg >= 60 && avg < 80)
				printf("First class.\n");
		else if(avg >= 50 && avg < 60)
				printf("Second class.\n");
		else if(avg >= 40 && avg < 50)
				printf("Pass.\n");
		else
				printf("Fail.\n");
		return 0;
}
