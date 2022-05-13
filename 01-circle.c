/*                      Area ( PI * r * r ) and Circumference ( 2 * PI * r ) of a circle           */
#include <stdio.h>
int main()
{

    int r;
    float area, circ;
    printf("Enter the radius: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circ);
    return 0;
}
