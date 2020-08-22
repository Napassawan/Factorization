#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b = 2;
int main()
{
	printf("Enter number : ");
	scanf("%d", &a);
	printf("Factoring Result : ");
	while ((a > 1) && (b < a))
	{
		if (a % b == 0)
		{
			printf("%d x ", b);
			a = a / b;
		}
		else
		{
			b++;
		}
	}
	printf("%d", b);
}