#include<stdio.h>
int main()
{
	int n, sum = 0, sc = 0, sont = 0;
	do
	{
		printf("Nhap n: "); scanf("%d", &n);
		sum += n;
		if (n % 2 == 0 && n != 0)
		{
			sc++;
		}
		if (n >= 2)
		{
			int temp = 0;
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0)
				{

					temp++;
				}
			}
			if (temp == 0)
			{
				printf("%d la so nguyen to\n", n);
				sont++;
			}
		}
	} while (n != 0);
	printf("Tong cac so da nhap la: %d\n", sum);
	printf("Tong cong co %d so chan\n", sc);
	printf("Tong cong co %d so nguyen to\n", sont);
}