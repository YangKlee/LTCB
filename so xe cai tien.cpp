#include <stdio.h>
int main()
{
	int n, sum = 0;
	printf("Nhap bien so xe (4 chu xo):");scanf("%d", &n);
	for (int i = 1; i <= 4; i++)
	{
		if (i == 1)
		{
			sum = n;
		} 
		else
		{
			sum += n%10; 
			n = n/10;
		}
	}
	printf("So diem bien so xe la: %d", sum%10);
}
