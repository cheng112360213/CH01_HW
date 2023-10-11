#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i, t;
	for (i = 0; i <= 4; i++)
	{
		if (i == 0)
		{
			for (t = 0; t <= 8; t++)
			{
				if (t == 4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		if (i == 1)
		{
			for (t = 0; t <= 8; t++)
			{
				if (t == 3 || t == 4 || t == 5)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		if (i == 2)
		{
			for (t = 0; t <= 8; t++)
			{
				if (t >= 2 && t <= 6)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		if (i == 3)
		{
			for (t = 0; t <= 8; t++)
			{
				if (t >= 1 && t <= 7)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		if (i == 4)
		{
			for (t = 0; t <= 8; t++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}