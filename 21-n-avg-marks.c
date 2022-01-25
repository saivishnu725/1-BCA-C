#include<stdio.h>
int main()
{
		int i,n;
		float m[30], sum = 0, avg;
		printf("Enter the number of students: ");
		scanf("%d",&n);
		for( i = 0; i< n;i++)
		{
				printf("Marks of student %d : ", (i+1));
				scanf("%f", &m[i]);
				sum += m[i]; 
		}
		avg = sum / n;
		printf("Average of marks of all the students = %.2f\n", avg);
		return 0;
}
