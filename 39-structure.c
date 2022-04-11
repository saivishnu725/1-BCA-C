#include<stdio.h>

struct student
{
		char name[30];
		int roll;
		float perc;
};

int main()
{
		struct student s[20];
		int i, n;

		printf("Enter the number of students: ");
		scanf("%d", &n);

		for(i = 0; i < n; i++)
		{
				printf("Enter name, roll no. and percentage of student %d: ", (i+1));
				scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].perc);
		}

		printf("\n\n************************");
		printf("\nStudents Details\n");
		printf("Name\tRoll no.\tPercentage\n");
		for(i = 0; i < n; i++)
				printf("%s\t%d\t\t%.2f\n", s[i].name, s[i].roll, s[i].perc);

		return 0;
}
