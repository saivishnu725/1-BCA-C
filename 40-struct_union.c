#include<stdio.h>
#include<string.h>

struct structExample
{
		int num;
		float decimal;
		char name[20];
};

union unionExample
{
		int num;
		float decimal;
		char name[20];
};

int main()
{
		struct structExample s;
		union unionExample u;

		// Structure assign
		s.num = 10;
		s.decimal = 1.1;
		strcpy(s.name, "Name");

		// Union assign
		u.num = 10;
		u.decimal = 1.1;
		strcpy(u.name, "Name");

		// Print
		printf("Structure: \tNum = %d\tDecimal = %3.2f\tName = %s\n", s.num, s.decimal, s.name);
		printf("Union: \tNum = %d\tDecimal = %3.2f\tName = %s\n\n", u.num, u.decimal, u.name);

		// sizeof()
		printf("Size of structure = %ld\n", sizeof(s));
		printf("Size of union = %ld\n\n", sizeof(u));

		// Accessing all at a time
		printf("Accessing all the values at a time.\n");
		printf("Structure: \tNum = %d\tDecimal = %3.2f\tName = %s\n", s.num, s.decimal, s.name);
		printf("Union: \tNum = %d\tDecimal = %3.2f\tName = %s\n\n", u.num, u.decimal, u.name);

		// Accessing one at a time
		printf("Accessing one value at a time.\n");
		printf("Structure values: ");
		s.num = 20;
		printf("Num = %d\t", s.num);
		s.decimal = 2.2;
		printf("Decimal = %3.2f\t", s.decimal);
		strcpy(s.name, "Again");
		printf("Name = %s\n", s.name);

		printf("Union values: ");	
		u.num = 20;
		printf("Num = %d\t", u.num);
		u.decimal = 2.2;
		printf("Decimal = %3.2f\t", u.decimal);
        strcpy(u.name, "Again");
        printf("Name = %s\n", u.name);

		return 0;
}
