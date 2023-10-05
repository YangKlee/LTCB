#include <stdio.h>
#include <math.h>
int main()
{
	int n, sum;
	printf("Nhap n: ");scanf("%d", &n);
	for (int i = 0; i<=n ; i++)
	{
		sum += i;
	}
	printf("Tong tu 1 den %d la: %d", n, sum);
}

