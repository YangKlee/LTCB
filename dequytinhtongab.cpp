#include<stdio.h>
int tongab(int a, int b)
{
	if( a > b)
	{
		return b;
	}
	else
	{
		return tongab(a, b-1)+b;
	}
}
int main()
{
	int a,b;
	printf("Nhap a va b (b > a): ");scanf("%d%d", &a, &b);
	printf("Tong tu a den b  la: %d", tongab(a,b));
}