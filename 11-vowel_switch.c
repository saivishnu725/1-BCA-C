/*                      Check if the input character is a vowel or not           */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    switch (ch)
    {
    case 'a':
        printf("It is a vowel.\n");
        break;
    case 'e':
        printf("It is a vowel.\n");
        break;
    case 'i':
        printf("It is a vowel.\n");
        break;
    case 'o':
        printf("It is a vowel.\n");
        break;
    case 'u':
        printf("It is a vowel.\n");
        break;
    default:
        printf("It is not a vowel.\n");
    }
    return 0;
}