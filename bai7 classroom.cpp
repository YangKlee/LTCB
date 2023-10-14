#include<stdio.h>
int main()
{
	int m, n;
	printf("Vui long nhap m va n: ");scanf("%d%d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}