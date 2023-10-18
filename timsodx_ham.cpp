#include<stdio.h>
int sodao = 0;
int revent(int n)
{
	int num;
	if(n == 0)
	{
		return sodao;
	}
	else
	{
		num = n%10;
		sodao = (sodao*10)+num;
		return revent(n/10);
	}
}
int main()
{
	int n;
	printf("Nhap day so bat ky: ");scanf("%d", &n);
	if(revent(n) == n)
	{
		printf("%d la so doi xung", n);
	}
}