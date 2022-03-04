#include<stdio.h>

int k;
void fn1();
void fn2();
void fn3();
void main()
{
		k=20;
		fn1();
		fn2();
		fn3();
}
void fn1() {
		k=k+10;
		printf("%d\n",k);
}
void fn2()
{
		k=k+1000;
		printf("%d\n",k);
}
void fn3()
{
		k=k+10;
		printf("%d\n",k);
}
