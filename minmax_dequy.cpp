#include<stdio.h>
int max = 0, min = 0;
int n_max(int n)
{
	int num;
	if(n == 0)
	{
		min = max;
		return max;
	}
	else
	{
		num = n%10;
		if(num > max)
			max = num;
		return n_max(n/10);
	}
}
int n_min(int n)
{
	int num;
	if(n == 0)
		return min;
	else
	{
		num = n%10;
		if(num < min)
			min = num;
		return n_min(n/10);
	}
}
int main()
{
	int n;
	printf("Nhap day so bat ky: ");scanf("%d", &n);
	printf("So lon nhat trong day so la: %d\n", n_max(n));
	printf("So nho nhat trong day so la: %d", n_min(n));
}