#include<stdio.h>
#include<string.h>
int main()
{
		char s1[100], s2[100];
		char *p1, *p2;

		printf("Enter the string: ");
		scanf("%s", s1);
		
		printf("len of s1 = %ld\n", strlen(s1));
		p1 = s1 + strlen(s1) - 1;
		p2 = s2;

		while(p1 >= s1)
		{
				*p2 = *p1;
				p2++;
				p1--;
		}
		
		*p2 = '\0';

		printf("Original string: %s\n", s1);
		printf("Reverse: %s\n", s2);

		return 0;
}
