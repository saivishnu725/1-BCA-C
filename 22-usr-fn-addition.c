#include<stdio.h>
int addition();
int main()
{
		int ans;
		ans = addition();
		printf("Sum = %d\n", ans);
		return 0;
}

int addition()
{
		int n1=10, n2=20;
		return n1+n2;
}
