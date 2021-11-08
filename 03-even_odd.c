#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("It is a even number. \n");
    else
        printf("It is a odd number. \n");
    return 0;
}