#include <stdio.h>
int main()
{
    //int m1, m2, m3, m4, m5, sum;
    float avg;

	printf("Enter the average of all the marks: ");
	scanf("%f", &avg);
//	printf("Enter five subject marks: ");
//    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
//	sum = m1 + m2 + m3 + m4 + m5;
//    avg = sum / 5;
    
	if (avg >= 80)
        printf("Distinction\n");
    else if (avg < 80 && avg >= 60)
        printf("First class\n");
    else if (avg < 60 && avg >= 50)
        printf("Second class\n");
    else if (avg < 50 && avg >= 40)
        printf("Pass\n");
	else
		printf("Fail\n");

	return 0;
}
