//viet code tinh tong chu so cua day so
#include<stdio.h>
int main()
{
	int n,num,d = 0;
	printf("Nhap day so: ");scanf("%d", &n);
	do
	{
		d++;
		n /= 10;
	}
	while(n!=0);
	printf("Day so co %d chu so", d);
}
