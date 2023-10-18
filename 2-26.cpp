#include<stdio.h>
int max;
int n_max(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int a, b,c;
	printf("Nhap so a, b, c: ");scanf("%d%d%d", &a, &b, &c);
	max = a;
	if(b > max)
	{
		max = n_max(b, c);
	}
	printf("So lon nhat la : %d", max);
	
}