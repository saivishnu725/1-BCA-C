#include<stdio.h>
int main(){
		int n =10;
		int *ptr;

		printf("Value of n = %d\n", n);
		printf("Address of n = %x\n", &n);

		ptr = &n;
		printf("Address of ptr = %x\n", &ptr);
		printf("Value of ptr = %x\n", ptr);
		printf("Value of n using ptr = %d\n", *ptr);

		*ptr = 20;
		printf("New value of n = %d\n", n);
		printf("New value of n using ptr = %d\n", *ptr);
		return 0;
}
