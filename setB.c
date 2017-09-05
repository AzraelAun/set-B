#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main()
{
	int arrayX[5] = { 200,400,600,800,1000 };
	double c[5];

	for (int i = 0; i < 5; i++)
	{
		c[i] = 40 + 0.35 * arrayX[i];
	}
	puts("");
	puts("   Distance in KM(X)       Cost(C)   ");
	puts("-------------------------------------");
	for (int i = 0; i < 5; i++)
	{
		printf("         %4d               %.2lf", arrayX[i], c[i]);

		if (c[i] > 300)
		{
			printf("*");
		}
		puts("");
	}
	puts("--------------------------------------");
	puts("");
	system("pause");
}
