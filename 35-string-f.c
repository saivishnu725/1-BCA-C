#include<stdio.h>
#include<string.h>

int main()
{
		char s1[15], s2[15], s3[15];
		int c;

		printf("Enter three strings: ");
		scanf("%s %s %s", s1, s2, s3);

		printf("s1 = %s\t s2 = %s\t s3 = %s\n", s1, s2, s3);
		
		// Length
		printf("Length of s1 = %ld\n", strlen(s1));

		// Concatination
		printf("s1 before concat = %s\n", s1);
		strcat(s1, s2);
		printf("s1 after concat = %s\n", s1);

		// Copy
		printf("s1 before copy = %s\n", s1);
		strcpy(s1, s3);
		printf("s1 after copy = %s\n", s1);

		// Compare
		c = strcmp(s1, s2);
		if(c == 0)
				printf("Both are equal.\n");
		else if(c > 0)
				printf("First string is big.\n");
		else
				printf("Second string is big.\n");

		return 0;
}
