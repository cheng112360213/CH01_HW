#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int n1, n2;
	printf("input two intrgers:");
	scanf("%d %d", &n1, &n2);
	if (n1%n2 == 0)
	{
		printf("the first is a multiple of the second.");
	}
	else
	{
		printf("the first is not a multiple of the second.");
	}
	return 0;
}