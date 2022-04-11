#include <stdio.h>
int main()
{
    int a, b, sum, diff, prod, rem, quo;
    char ch;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operator: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
     sum = a + b;
        printf("Sum = %d\n", sum);
        break;
    case '-':
        diff = a - b;
        printf("Difference = %d\n", diff);
        break;
    case '*':
        prod = a * b;
        printf("Product = %d\n", prod);
        break;
    case '/':
        quo = a / b;
        printf("Quotient = %d\n", quo);
        break;
    case '%':
        rem = a % b;
        printf("Reminder = %d\n", rem);
        break;
    default:
        printf("Invalid input!!\n");
        break;
    }
    return 0;
}