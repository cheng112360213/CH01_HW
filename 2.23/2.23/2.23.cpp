#include <stdio.h>

int main()
{
	int n1, n2, n3;
	printf("input three integers:");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2&&n1 > n3)
	{
		printf("max:%d\n", n1);
	}
	if (n2 > n1&&n2 > n3)
	{
		printf("max:%d\n", n2);
	}
	if (n3 > n2&&n3 > n1)
	{
		printf("max:%d\n", n3);
	}
	if (n1 < n2&&n1 < n3)
	{
		printf("min:%d\n", n1);
	}
	if (n2 < n1&&n2 < n3)
	{
		printf("min:%d\n", n2);
	}
	if (n3 < n2&&n3 < n1)
	{
		printf("min:%d\n", n3);
	}
	return 0;
}