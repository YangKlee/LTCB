#include<stdio.h>
int tong(int n)
{
	if(n <= 0)
	{
		return n;
	}
	else
	{
		return tong(n-1)+n;
	}
}
int main()
{
	int n;
	printf("Nhap n: ");scanf("%d", &n);
	printf("Tong tu 1 den %d la: %d", n, tong(n)  );
}