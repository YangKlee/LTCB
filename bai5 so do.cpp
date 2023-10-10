#include <stdio.h>
int main()
{
	int m = 0, n;
	do
	{
		printf("Nhap n: "); scanf("%d", &n);
		if (n > m)
		{
			m = n;
		}		
	} 
	while(n != 0);
	printf("Ket qua la: %d", m);
}