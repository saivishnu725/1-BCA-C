#include<stdio.h>
#include<math.h>

int main()
{
		float a, b, c;
		float r1, r2, real, imag, dis;
		int flag;

		printf("Enter values of a, b and c: ");
		scanf("%f %f %f", &a, &b, &c);

		dis = (b * b) - (4 * a * c);
		printf("Discriminant = %f\n", dis);

		if(dis == 0)
				flag = 1;
		else if(dis > 0)
				flag = 2;
		else
				flag = 3;

		switch(flag)
		{
				case 1:
						printf("Roots are real and equal.\n");
						r1 = r2 = (-b) / (2 * a);
						printf("Root 1 = %f\n", r1);
						printf("Root 2 = %f\n", r2);
						break;
				case 2:
						printf("Roots are real and distinct.\n");
						r1 = (-b + sqrt(dis)) / (2 * a);
						r2 = (-b - sqrt(dis)) / (2 * a);
						printf("Root 1 = %f\n", r1);
						printf("Root 2 = %f\n", r2);
						break;
				case 3:
						printf("Imaginary roots.\n");
						real = (-b) / (2 * a);
						imag = sqrt(fabs(dis)) / (2 * a);
						printf("Root 1 = %f +i %f\n", real, imag);
						printf("Root 2 = %f -i %f\n", real, imag);
						break;
		}

		return 0;
}
