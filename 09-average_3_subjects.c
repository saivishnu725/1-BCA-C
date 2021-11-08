#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three subjects marks: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3;
    printf("Average = %f\n", avg);
    return 0;
}