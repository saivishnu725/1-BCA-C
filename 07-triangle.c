#include <stdio.h>
int main()
{
    int b, h, s, area, peri;
    printf("Enter the base and height and side of the triangle: ");
    scanf("%d %d %d", &b, &h, &s);
    area = 0.5 * (b * h);
    peri = b + h + s;
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", peri);
    return 0;
}