/*                          Area ( l * b ) and Perimeter ( 2 * (l + b) ) of the rectangle.                     */
#include <stdio.h>
int main()
{
    int l, b, area, peri;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    peri = 2 * (l + b);
    printf("Area = %d \n", area);
    printf("Perimeter = %d \n", peri);
    return 0;
}