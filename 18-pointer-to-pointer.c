#include<stdio.h>
int main()
{
		int a, *b,**c,***d,****e;
		a = 100;
		b = &a;
		c = &b;
		d= &c;
		e= &d;
		printf("\n\n\n\n\na = %d\tb=%d\tc=%d\td=%d\te=%d\n",a,b,c,d,e);
		printf("%d\t%d\t%d\n",a, a+*b+**c+***d, a+*b+**c+***d+****e);	
		return 0;
}
