#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float root;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        goto calc;
    printf("Entered number is less than 0.\n");
    goto end;
calc:
    root = sqrt(n);
    printf("Square root of %d = %f\n", n, root);
end:
    return 0;
}