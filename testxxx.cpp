#include<stdio.h>
int main()
{
	int n,i;
	printf("Nhap n: ");scanf("%d", &n);
	for(i = 1; i<=n; i++)
	{
		if(n%i==0)
		{
			printf("%d ", i);
		}
	}
}
// Tim nhung so tu 1-n chia het cho n
