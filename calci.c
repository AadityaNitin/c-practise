#include <stdio.h>
int main(int argc, char const *argv[])
{
	float a, b;
	int opt;
	do
	{
		printf("Enter first number : ");
		scanf("%f", &a);
		printf("Enter second number : ");
		scanf("%f", &b);
		printf("Input option\n");
		printf("1-Addition\n2-Substraction\n3-Multiplication\n4-Divison\n5-Exit\n");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			printf("The Addition of %f and %f is: %f\n", a, b, a + b);
			break;

		case 2:
			printf("The Substraction of %f  and %f is: %f\n", a, b, a - b);
			break;

		case 3:
			printf("The Multiplication of %f  and %f is: %f\n", a, b, a * b);
			break;

		case 4:
			if (b == 0)
			{
				printf("Maths error\n");
			}
			else
			{
				printf("The Division of %f  and %f is : %f\n", a, b, a / b);
			}
			break;

		case 5:
			printf("Exit");
			break;

		default:
			printf("Syntax error\n");
			break;
		}
	} while (opt != 5);

	return 0;
}
