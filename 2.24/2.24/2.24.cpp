#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int n1;
	printf("input a integer:");
	scanf("%d", &n1);

	if (n1 % 2 == 0)
	{
		printf("the integer is even");
	}
	else
		printf("the integer  is odd");
	return 0;
}