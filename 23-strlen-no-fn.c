#include<stdio.h>
#include<string.h>

int main()
{
	char s[25];
	int i = 0;
	printf("Enter a word: ");
	//scanf("%s", s);
	gets(s);
	printf("s = %s\n", s);
	while (s[i] != '\0')
		i++;
	printf("Length = %d\n", i);
	printf("Length using function = %ld\n", strlen(s));
	return 0;
}


