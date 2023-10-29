#include<stdio.h>
int max = 0;
int findmax(int n)
{
	// dung de quy de tach so
	int num;
	if(n == 0)
	{
		return max;
	}
	else
	{
		num = n%10;
		if(num > max)
		{
			max = num;
		}
		return findmax(n/10); 
	}
}
int main()
{
	int n;
	printf("Nhap day so : ");
	scanf("%d", &n);
	printf("So lon nhat trong day la: %d ",findmax(n) );
}