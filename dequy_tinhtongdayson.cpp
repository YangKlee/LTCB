#include<stdio.h>
int sum = 0;
int sum_number(int n)
{
	
	if(n == 0)
	{
		return sum;
	}
	else
	{
		sum += n%10;
		return sum_number(n/10);
	}
}
int main()
{
	int n;
	printf("Nhap day so: ");scanf("%d", &n);
	printf("Tong cac so trong day so la: %d", sum_number(n) );
}