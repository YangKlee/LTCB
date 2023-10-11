#include<stdio.h>
#include<math.h>
int main()
{
	int n, sum = 0;
	printf("Nhap day so nguyen duong n:  ");scanf("%d", &n);
	do
	{
		sum += n%10;
		n = n/ 10;
	}
	while(n!= 0);
	printf("Tong cac so trong day la: %d", sum);
}