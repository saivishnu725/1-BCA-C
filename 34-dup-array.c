#include<stdio.h>
int main()
{
		int a[50], i, j, k, n;

		printf("Enter size of the array: ");
		scanf("%d", &n);

		printf("Enter %d elements of array\n", n);
		for(i = 0; i < n; i++)
				scanf("%d", &a[i]);

		printf("Entered elements are: ");
		for(i = 0; i < n; i++)
				printf("\t%d", a[i]);

		for(i = 0; i < n; i++)
				for(j = i + 1; j < n; j++)
				{
						if(a[i] == a[j])
						{
								for(k = j; k < n; k++)
										a[k] = a[k +1];
								j--;
								n--;
						}
				}

		printf("\nArray after delete: ");
		for(i = 0; i < n; i++)
				printf("\t%d", a[i]);
		printf("\n");

		return 0;
}
