#include<stdio.h>
#include <stddef.h>
int kt_hoanthien(int n)
{
	int cout = 0;
	for (int i = 1 ; i < n; i++)
	{
		if (n % i == 0)
		{
			cout += i;
			
		}
	}
	//printf("%d %d\n", cout, n);
	if (cout == n)
	{
		return n;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a, b;
	printf("Nhap a va b ( a < b) "); scanf("%d%d", &a, &b);
	printf("So hoan thien trong khoang [%d,%d] la: ", a, b);
	for (int n = a; n <= b; n++)
	{

		if(kt_hoanthien(n) != 0)
		{
			printf("%d ", kt_hoanthien(n));
		}
		
	}
}