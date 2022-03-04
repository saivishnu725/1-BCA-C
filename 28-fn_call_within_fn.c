#include<stdio.h>
void f1();
void f2();
void main()
{
	int m=1000;
	f2();
	printf("%d\n",m);
}
void f1()
{
	int m=10;
	printf("%d\n",m);
}
void f2()
{
	int m=100;
	f1();
	printf("%d\n",m);
}
