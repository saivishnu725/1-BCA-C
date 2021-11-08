#include <stdio.h>

int main()
{
    int n, num, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum of the digits in %d = %d\n", n, sum);
    return 0;
}