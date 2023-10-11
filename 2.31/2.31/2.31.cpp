#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i = 0, n1 = 0, n2 = 0;
	printf("nuber square cube\n");
	for (i = 0; i <= 10; i++)
	{
		n1 = i * i;
		n2 = i * i*i;
		if (i < 4)
			printf("%d     %d     %d\n", i, n1, n2);
		else if (i < 10 && i>3)
			printf("%d     %d    %d\n", i, n1, n2);
		else
			printf("%d    %d   %d\n", i, n1, n2);
	}
	return 0;
}